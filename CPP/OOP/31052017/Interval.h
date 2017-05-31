#pragma once
#include <iosfwd>

float max(float a, float b);
float min(float a, float b);

class Interval
{
private:
	float m_begin;
	float m_end;

public:
	Interval();
	Interval(float begin, float end);

	Interval(Interval const& interval);
	Interval& operator=(Interval const& rhs);

	float SetBeginEnd(float begin, float end);
	float GetBegin()const;
	float GetEnd()const;

	float GetLength() const;
	void Move(float dist);
	void Expand(float scale);
	float Mid() const;
	bool IsEmpty() const;

	Interval operator&(Interval const& rhs);
	Interval operator|(Interval const& rhs);
	void operator+=(Interval const rhs);
	void operator-=(Interval const rhs);
};

std::ostream& operator<<(std::ostream& stream, Interval const& interval);
std::istream& operator>> (std::istream& stream, Interval& interval);



