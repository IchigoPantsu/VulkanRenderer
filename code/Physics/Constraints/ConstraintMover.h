//
//	ConstraintMover.h
//
#ifndef PHYSICS_CONSTRAINTS_CONSTRAINTMOVER_H
#define PHYSICS_CONSTRAINTS_CONSTRAINTMOVER_H
#pragma once
#include "ConstraintBase.h"

/*
====================================================
ConstraintMoverSimple
====================================================
*/
class ConstraintMoverSimple : public Constraint {
public:
	ConstraintMoverSimple() : Constraint(), m_time( 0 ) {}

	void PreSolve( const float dt_sec ) override;

	float m_time;
};
#endif//PHYSICS_CONSTRAINTS_CONSTRAINTMOVER_H
