#pragma once
#include <iosfwd>

class Stek
{
private:
	int* m_elements;
	size_t m_capacity;
	size_t m_count;

	void ExpandMemory();

public:
	Stek();
	bool Contains(int element) const;
	size_t GetCount() const;
	void Push(int element);
	void Pop();
	Stek(Stek const& stek);
	~Stek();
	Stek& operator=(Stek const& rhs);
	int Top(int element);
	void Clear();
	Stek& operator<<(int element);
	Stek& operator>>(int& element);
};
