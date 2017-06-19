#include "Set.h"
#include<cstring>
#include <iostream>

void Set::ReAllocMem(size_t newCapaciti)
{
	m_capacity = newCapaciti;
	int* newMem = new int[m_capacity];
	memcpy(newMem, m_elements, m_count);
	delete[] m_elements;
	m_elements = newMem;
}


Set::Set():
	m_capacity(5), 
	m_count(0)
{
	m_elements = new int[5];
}


Set::Set(int number):
	m_capacity(5), m_count(1)
{
	m_elements = new int[5];
	m_elements[0] = number;
}


Set::Set(Set const& rhs):
	m_capacity(rhs.m_capacity), 
	m_count(rhs.m_count)
{
	m_elements = new int[rhs.m_capacity];
	memcpy(m_elements, rhs.m_elements, m_count * sizeof(int));
}


Set::~Set()
{
	delete[] m_elements;
}


size_t Set::GetCount() const
{
	return m_count;
}


bool Set::Contains(int element) const
{
	for (size_t i = 0; i < m_count; i++)
	{
		if (m_elements[i] == element)
		{
			return true;
		}
	}
	return false;
}


Set& Set::operator=(Set const& rhs)
{
	if (this != &rhs)
	{
		m_capacity = rhs.m_capacity;
		m_count = rhs.m_count;
		delete[] m_elements;
		m_elements = new int[rhs.m_capacity];
		memcpy(m_elements, rhs.m_elements, m_count * sizeof(int));
	}
	return *this;
}


void Set::operator+=(int element)
{
	if (!Contains(element))
	{
		if (m_capacity == m_count)
		{
			ReAllocMem(m_capacity * 2);
		}
		m_elements[m_count+1] = element;
	}
}


void Set::operator-=(int element)
{
	for (size_t i = 0; i < m_count; i++)
	{
		if (m_elements[i] == element)
		{
			m_count = m_count- 1;
			for (size_t j = i; j < m_count; j++)
			{
				m_elements[j] = m_elements[j + 1];
			}
			
			if (m_capacity / 4 >= m_count && m_capacity >= 20)
			{
				ReAllocMem(m_capacity / 2);
			}
			break;
		}
	}
}


bool Set::operator==(Set const& rhs) const
{
	if (m_count == rhs.m_count)
	{
		for (size_t i = 0; i < m_count; i++)
		{
			if (!Contains(rhs.m_elements[i]))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}


bool Set::operator!=(Set const& rhs) const
{
	return !(*this == rhs);
}


Set::operator bool() const
{
	return m_count > 0;
}


Set operator&(Set const& set1, Set const& set2)
{
	Set res;
	for (size_t i = 0; i < set2.m_count; i++)
	{
		if (set1.Contains(set2.m_elements[i]))
		{
			res += set1.m_elements[i];
		}
	}
	return res;
}


Set operator|(Set const& set1, Set const& set2)
{
	Set res(set1);
	for (size_t i = 0; i < set2.m_count; i++)
	{
		if (!set1.Contains(set2.m_elements[i]))
		{
			res += set2.m_elements[i];
		}
	}
	return res;
}


std::ostream& operator<<(std::ostream& stream, Set const& set)
{
	for (size_t i = 0; i < set.m_count; i++)
	{
		stream << set.m_elements[i] << " ";
	}
	return stream;
}


std::istream& operator>>(std::istream& stream, Set& set)
{
	char buffer[1024];
	stream.getline(buffer, 1024);
	size_t length = strlen(buffer);
	delete[] set.m_elements;
 	set.m_count = new char[length + 1];
	strcpy(set.m_capacity, buffer);

	return stream;
}
