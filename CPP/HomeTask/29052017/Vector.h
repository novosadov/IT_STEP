#pragma once

class Vector
{
private:
	int m_x;
	int m_y;
	int m_z;
public:
	Vector();
	Vector(int x, int y, int z);
	void Read();
	void Print() const;
	Vector operator+(Vector const& rhs);
	int Summ(int v1, int v2);
	int LeghtVector(int x, int y, int z);
	Vector Scalyar(Vector v1, int x1, int y1, int z1, Vector v2, int x2, int y2, int z2);
	Vector operator*(Vector const& rhs);
	Vector& operator=(Vector const& vector);
};
