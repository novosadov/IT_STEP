#pragma once


class StackException
{
	size_t m_count;
public:
	StackException(size_t count) :
		m_count(count)
	{
	}

	size_t GetCount()
	{
		return m_count;
	}
};

class Stack
{
private:
	int* m_elements;
	size_t m_capacity;
	size_t m_count;

	void ReallocateMemory(int newCapacity);
	void CheckIsEmpty();

public:
	Stack();
	Stack(Stack const& stack);
	~Stack();

	void Push(int element);
	int Pop();
	size_t GetQuantity();
	int Top();
	void Clear();

	Stack& operator=(Stack const& stack);
	Stack& operator<<(int element);
	Stack& operator >> (int& element);
};
