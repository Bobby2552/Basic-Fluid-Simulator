#pragma once

#include <ostream>

struct Vector {
public:
	double x;
	double y;
	double z;

	Vector (double x, double y, double z);
	
	Vector operator+(Vector rhs);
	Vector operator-(Vector rhs);
	Vector operator*(Vector rhs);
	Vector operator/(Vector rhs);

	double dot(Vector vec);
	Vector cross(Vector vec);
	double magnitude();
};

std::ostream& operator<<(std::ostream& os, const Vector& vec);
