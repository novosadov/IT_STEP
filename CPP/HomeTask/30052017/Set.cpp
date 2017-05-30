#include"Set.h"
#include<iostream>
#include<cstring>

Set::Set()
{
	m_capacity = 5;
	m_elements = new int[m_capacity];
	m_count = 0;
}

void Set::ExpandMemory()
{
	m_capacity *= 2;
	int* newMemory = new int[m_capacity];
	memcpy(newMemory, m_elements, m_count);
	delete[] m_elements;
	m_elements = newMemory;
}

bool Set::Contains(int element) const
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

size_t Set::GetCount() const
{
	return m_count;
}

void Set::Add(int element)
{
	if (!Contains(element))
	{
		if (m_count == m_capacity)
		{
			ExpandMemory();
		}
		m_elements[m_count] = element;
		m_count++;
	}
}

void Set::Remove(int element)
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
}
