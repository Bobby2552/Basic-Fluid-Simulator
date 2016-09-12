
#include <iostream>

#include "Vector.h"

int main(int argc, char** argv) {
	Vector vec1(2, 3, 4);
	Vector vec2 = vec1 + Vector(4, 5, 6);
	Vector vec3 = vec1 - Vector(4, 5, 6);
	Vector vec4 = vec1 * Vector(4, 5, 6);
	Vector vec5 = vec1 / Vector(4, 5, 6);

	Vector vec6(5, 6, 7);

	std::cout << vec2 << "\n";
	std::cout << vec3 << "\n";
	std::cout << vec4 << "\n";
	std::cout << vec5 << "\n";
	std::cout << "Dot product\n";
	std::cout << vec1.dot(vec6) << "\n"; 
	std::cout << "Cross product\n";
	std::cout << vec1.cross(vec6) << "\n"; 
	std::cout << "Magnitude\n";
	std::cout << vec1.magnitude() << "\n"; 

	return 0;
}
