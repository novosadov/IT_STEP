#pragma once


class Set
{
	int* m_elements;
	size_t m_capacity; //сколько выделено памяти
	size_t m_count;  //скопированные элементы количество элементов

	void ExpandMemory();

public:
	Set();
	bool Contains(int element) const;
	size_t GetCount() const;
	void Add(int element);
	void Remove(int element);
};


