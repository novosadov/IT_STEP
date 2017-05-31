#include "Interval.h"
#include <iostream>
#include <stdio.h>

float max(float a, float b)
{	
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}


float min(float a, float b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}


Interval::Interval()
{
	m_begin = 0;
	m_end = 0;
}

Interval::Interval(float begin, float end)
{
	m_begin = begin;
	m_end = end;
}


Interval::Interval(Interval const& interval):
	m_begin(interval.m_begin), 
	m_end(interval.m_end)
{			
}

Interval& Interval::operator=(Interval const& interval)
{
	if (this == &interval)
	{
		return *this;
	}
	this->m_begin = interval.m_begin;
	this->m_end = interval.m_end;
	return *this;
}

void Interval::SetBeginEnd(float begin, float end)
{
	m_begin = begin;
	m_end = end;
} 

float Interval::GetBegin()const
{
	return m_begin;
}

float Interval::GetEnd()const
{
	return m_end;
}


float Interval::GetLength() const
{
	
	return m_end - m_begin;
}

void Interval::Move(float dist)
{

}

void Interval::Expand(float scale)
{

}

float Interval::Mid() const
{
	return 0;
}

bool Interval::IsEmpty() const
{
	return 0;
}


Interval Interval::operator&(Interval const& rhs)
{
	Interval result;
	float beg3 = max(this->m_begin, rhs.m_begin);
	float end3 = min(this->m_end, rhs.m_end);

	if (beg3 <= end3)
	{
		result.m_begin = beg3;
		result.m_end = end3;
	}
	return result;
}

Interval Interval::operator|(Interval const& rhs)
{
	Interval result;

	return result;
}

void Interval::operator+=(Interval const rhs)
{

}

void Interval::operator-=(Interval const rhs)
{

}

std::ostream& operator<<(std::ostream& stream, Interval const& interval)
{
	stream << interval.GetBegin() << " " << interval.GetEnd()<< "\n";
	return stream;
}

std::istream& operator>>(std::istream& stream, Interval& interval)
{
	char buffer[20];
	stream.getline(buffer, 19);
	sscanf(buffer, "%f %f", &interval.m_begin, &interval.m_end);
	return stream;
}
