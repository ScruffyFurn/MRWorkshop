﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using UnityEngine;

namespace HoloToolkit.Unity.Design
{
    public abstract class LineRenderer : MonoBehaviour
    {
        [Header("Visual Settings")]
        public Gradient LineColor;

        public AnimationCurve LineWidth = AnimationCurve.Linear(0f, 0.05f, 1f, 0.05f);
        [Range(0f, 1f)]
        public float WidthMultiplier = 0.025f;

        [Header("Offsets")]
        [Range(0f, 10f)]
        public float ColorOffset = 0f;
        [Range(0f, 10f)]
        public float WidthOffset = 0f;
        [Range(0f, 10f)]
        public float RotationOffset = 0f;

        [Header("Point Placement")]
        public LineUtils.StepModeEnum StepMode = LineUtils.StepModeEnum.Interpolated;

        public LineUtils.InterpolationModeEnum InterpolationMode = LineUtils.InterpolationModeEnum.FromLength;
        [Range(0, 2048)]
        public int NumLineSteps = 10;
        [Range(0.001f, 1f)]
        public float StepLength = 0.05f;
        [Range(1, 2048)]
        public int MaxLineSteps = 2048;

        public AnimationCurve StepLengthCurve = AnimationCurve.Linear(0f, 1f, 1f, 0.5f);

        [SerializeField]
        protected LineBase source;
        public virtual LineBase Target
        {
            get { return source; }
            set { source = value; }
        }

        private float[] normalizedLengths;

        protected virtual Color GetColor(float normalizedLength)
        {
            if (LineColor == null)
            {
                LineColor = new Gradient();
            }

            return LineColor.Evaluate(Mathf.Repeat(normalizedLength + ColorOffset, 1f));
        }

        protected virtual float GetWidth(float normalizedLength)
        {
            if (LineWidth == null)
            {
                LineWidth = AnimationCurve.Linear(0f, 1f, 1f, 1f);
            }

            return LineWidth.Evaluate(Mathf.Repeat(normalizedLength + WidthOffset, 1f)) * WidthMultiplier;
        }

        protected virtual void OnEnable()
        {
            if (source == null)
            {
                source = gameObject.GetComponent<LineBase>();
            }
        }

#if UNITY_EDITOR
        protected virtual void OnDrawGizmos()
        {
            if (Application.isPlaying)
            {
                return;
            }

            if (source == null)
            {
                source = gameObject.GetComponent<LineBase>();
            }

            if (source == null || !source.enabled)
            {
                return;
            }

            GizmosDrawLineRenderer(source, this);
        }

        public static void GizmosDrawLineRenderer(LineBase source, LineRenderer renderer)
        {
            switch (renderer.StepMode)
            {
                case LineUtils.StepModeEnum.FromSource:
                    GizmosDrawLineFromSource(source, renderer);
                    break;

                case LineUtils.StepModeEnum.Interpolated:
                    GizmosDrawLineInterpolated(source, renderer);
                    break;
            }
        }

        public static void GizmosDrawLineFromSource(LineBase source, LineRenderer renderer)
        {
            Vector3 firstPos = source.GetPoint(0);
            Vector3 lastPos = firstPos;
            Color gColor = renderer.GetColor(0);

            gColor.a = 0.5f;
            Gizmos.color = gColor;
            Gizmos.DrawSphere(firstPos, renderer.GetWidth(0) / 2);
            for (int i = 1; i < source.NumPoints; i++)
            {
                float normalizedLength = (1f / source.NumPoints) * i;
                Vector3 currentPos = source.GetPoint(i);
                gColor = renderer.GetColor(normalizedLength);
                gColor.a = 0.5f;
                Gizmos.color = gColor;
                Gizmos.DrawLine(lastPos, currentPos);
                Gizmos.DrawSphere(currentPos, renderer.GetWidth(normalizedLength) / 2);
                lastPos = currentPos;
            }

            if (source.Loops)
            {
                Gizmos.DrawLine(lastPos, firstPos);
            }
        }

        public static void GizmosDrawLineInterpolated(LineBase source, LineRenderer renderer)
        {
            Vector3 firstPos = source.GetPoint(0f);
            Vector3 lastPos = firstPos;
            Color gColor = renderer.GetColor(0);

            gColor.a = 0.5f;
            Gizmos.color = gColor;
            Gizmos.DrawSphere(firstPos, renderer.GetWidth(0) / 2);
            for (int i = 1; i < renderer.NumLineSteps; i++)
            {
                float normalizedLength = (1f / renderer.NumLineSteps) * i;
                Vector3 currentPos = source.GetPoint(normalizedLength);
                gColor = renderer.GetColor(normalizedLength);
                gColor.a = 0.5f;
                Gizmos.color = gColor;
                Gizmos.DrawLine(lastPos, currentPos);
                Gizmos.DrawSphere(currentPos, renderer.GetWidth(normalizedLength) / 2);
                lastPos = currentPos;
            }

            if (source.Loops)
            {
                Gizmos.DrawLine(lastPos, firstPos);
            }
        }
#endif
    }
}