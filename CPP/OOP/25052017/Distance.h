#pragma once

class Distance
{
public:
	Distance();
	Distance(int feet, float inches);
	Distance(int feet);

	int GetFeet();
	float GetInches();
	void SetData(int feet, float inches);
	void Read();
	void Print();
	void Add(Distance const& d);
	void Deduct(Distance const& d);


	Distance operator-(Distance const& rhs);
	Distance operator+(Distance const& rhs);
	void operator+=(Distance const& rhs);
	void operator-=(Distance const& rhs);
	Distance& operator++();
	Distance operator++(int);

private:
	int m_feet = 0;
	float m_inches = 0;
};


//Distance Summ(Distance const& d1, Distance const& d2);
//Distance Diff(Distance const& d1, Distance const& d2);
