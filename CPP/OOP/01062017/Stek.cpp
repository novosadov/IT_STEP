#include "Stek.h"
#include<cstring>
#include<iostream>


Stek::Stek()
{
	m_capacity = 10;
	m_elements = new int[m_capacity];
	m_count = 0;
}


void Stek::ExpandMemory()
{
	m_capacity *= 2;
	int* newMemory = new int[m_capacity];
	memcpy(newMemory, m_elements, sizeof(int)*m_count);
	delete[] m_elements;
	m_elements = newMemory;
}


bool Stek::Contains(int element) const
{
	for (size_t i = 0; i < m_count; ++i)
	{
		if (m_elements[i] == element)
		{
			return true;
		}
	}
	return false;
}

size_t Stek::GetCount() const
{
	return m_count;
}

void Stek::Push(int element)
{	
		if (m_count == m_capacity)
		{
			ExpandMemory();
		}
		m_elements[m_count] = element;
		m_count++;	
}


void Stek::Pop()
{
	for (size_t i = 0; i < m_count; ++i)
	{
		if (m_elements[i] == m_elements[i+1])
		{
			for (size_t j = i; j < m_count - 1; ++j)
			{
				m_elements[j] = m_elements[j + 1];
			}
			m_count--;
			break;
		}
	}
}


Stek::Stek(Stek const& stek):
	m_capacity(stek.m_capacity),
	m_count(stek.m_count)
{
	int* m_elements = new int[m_capacity];
	memcpy(m_elements, stek.m_elements, sizeof(int)*m_count);	
}

Stek::~Stek()
{
	delete[] m_elements;
}

Stek& Stek::operator=(Stek const& stek)
{
	if (this == &stek)
	{
		return *this;
	}
	this->m_elements = stek.m_elements;
	this->m_count = stek.m_count;
	return *this;
}

int Stek::Top(int element)
{
	return element;
}

void Stek::Clear()
{
	delete[] m_elements;
}

Stek& Stek::operator<<(int element)
{
	if (m_count == m_capacity)
	{
		ExpandMemory();
	}
	m_elements[m_count] = element;
	m_count++;
	return *this;
}

Stek& Stek::operator >> (int& element)
{
	for (size_t i = 0; i < m_count; ++i)
	{
		if (m_elements[i] == element)
		{
			for (size_t j = i; j < m_count - 1; ++j)
			{
				m_elements[j] = m_elements[j + 1];
			}
			m_count--;
			break;
		}
	}
	return *this;
}
