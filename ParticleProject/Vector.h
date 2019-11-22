#pragma once

#include <iostream> 
using namespace std;

class Vector
{
	public:
		float x, y, z;
	public:
		Vector(float px = 0, float py = 0, float pz = 0) {
			x = px;
			y = py;
			z = pz;
		}
		float dotProduct(const Vector& v1, const Vector& v2);
		Vector crossProduct(const Vector& v1, const Vector& v2);
		friend Vector operator+(const Vector& v1, const Vector& v2);
		friend Vector operator-(const Vector& v1, const Vector& v2);
		Vector& operator=(const Vector& v1);
};

