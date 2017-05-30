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
};
