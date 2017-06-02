#include"Vector.h"
#include<iostream>
#include<math.h>

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


int Vector::Summ(int v1, int v2)
{
	int result = v1 + v2;
	return result;
}


int Vector::LeghtVector(int x, int y, int z)
{
	int result = sqrt((x*x)+(y*y)+(z*z));
	return result;
}


Vector Vector::operator*( Vector const& rhs)
{
	Vector result = *this;
	result = result*rhs;
	return result;
}


Vector& Vector::operator=(Vector const& vector)
{
	if (this == &vector)
	{
		return *this;
	}
	this->m_x = vector.m_x;
	this->m_y = vector.m_y;
	this->m_z = vector.m_z;
	return *this;
}


Vector Vector::Scalyar(Vector v1,int x1, int y1, int z1, Vector v2, int x2, int y2, int z2)
{
	int result =(x1*x2) + (y1*y2) + (z1*z2);
	return *this;
}

