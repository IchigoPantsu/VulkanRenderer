//
//	LCP.h
//
#ifndef MATH_LCP_H
#define MATH_LCP_H
#pragma once
#include "Vector.h"
#include "Matrix.h"


/*
====================================================
LCP_GaussSeidel
====================================================
*/
VecN LCP_GaussSeidel( const MatN & A, const VecN & b );
#endif//MATH_LCP_H
