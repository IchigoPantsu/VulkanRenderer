//
//	GJK.h
//
#ifndef PHYSICS_GJK_H
#define PHYSICS_GJK_H
#pragma once
#include "../Math/Vector.h"
#include "../Math/Quat.h"
#include "../Math/Matrix.h"
#include "../Math/Bounds.h"
#include "Body.h"
#include "Shapes.h"

bool GJK_DoesIntersect( const Body * bodyA, const Body * bodyB );
bool GJK_DoesIntersect( const Body * bodyA, const Body * bodyB, const float bias, Vec3 & ptOnA, Vec3 & ptOnB );
void GJK_ClosestPoints( const Body * bodyA, const Body * bodyB, Vec3 & ptOnA, Vec3 & ptOnB );
#endif//PHYSICS_GJK_H
