#include "Vector.h"
#include "tgmath.h"

using namespace std;

Vector::Vector(double x, double y, double z) : x(x), y(y), z(z) { }

ostream& operator<<(ostream& os, const Vector& vec) {
	os << "(" << vec.x << ", " << vec.y << ", " << vec.z << ")";
	return os;
}

Vector Vector::operator+(Vector rhs) {
	return Vector(x + rhs.x, y + rhs.y, z + rhs.z);
}
Vector Vector::operator-(Vector rhs) {
	return Vector(x - rhs.x, y - rhs.y, z - rhs.z);
}
Vector Vector::operator*(Vector rhs) {
	return Vector(x * rhs.x, y * rhs.y, z * rhs.z);
}
Vector Vector::operator/(Vector rhs) {
	return Vector(x / rhs.x, y / rhs.y, z / rhs.z);
}

double Vector::dot(Vector vec) {
	double dotProduct = (x * vec.x) +  (y * vec.y) +  (z * vec.z); 
	return dotProduct;
}

Vector Vector::cross(Vector vec) {
	double crossX = (y * vec.z) - (z * vec.y);
	double crossY = (z * vec.x) - (x * vec.z);
	double crossZ = (x * vec.y) - (y * vec.x);

	return Vector(crossX, crossY, crossZ);
}

double Vector::magnitude() {
	Vector vec(x, y, z);
	return sqrt(vec.dot(vec));
}
