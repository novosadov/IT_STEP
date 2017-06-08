#pragma once

#include "String.h"

class Student
{
private:
	String m_name;
	int m_rating;

public:
	Student();
	Student(String const& name, int rating);
	// copy constructor
	Student(Student const& student);
	Student(Student&& student);

	~Student();

	String const& GetName() const;
	int GetRating() const;

	void SetName(String const& name);
	void SetRating(int rating);

	void Read();
	void Print() const;

	bool operator<(Student const& rhs) const;
	bool operator>(Student const& rhs) const;

	Student& operator=(Student& student);
};
