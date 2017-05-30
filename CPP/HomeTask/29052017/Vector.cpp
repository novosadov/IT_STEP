#include"Vector.h"
#include<iostream>

Vector::Vector():
	m_x(0),
	m_y(0),
	m_z(0)
{
}

Vector::Vector(int x, int y, int z):
	m_x(x),
	m_y(y),
	m_z(z)
{
}

void Vector::Read()
{
	std::cout << "Enter x:\n";
	std::cin >> m_x;
	std::cout << "Enter y:\n";
	std::cin >> m_y;
	std::cout << "Enter z:\n";
	std::cin >> m_z;
}

void Vector::Print()const
{
	std::cout << "x = " << m_x << ";\n";
	std::cout << "y = " << m_y << ";\n";
	std::cout << "z = " << m_z << ";\n";
}

Vector Vector::operator+(Vector const& rhs)
{
	Vector result = *this;
	result = result + rhs;
	return result;
}
