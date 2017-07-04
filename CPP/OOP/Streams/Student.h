#pragma once

#include "Person.h"

class Student : public Person
{
private:
	int m_rating;

public:
	Student();
	Student(std::string const& name, int rating);
	Student(Student const& student);
	Student(Student&& student);
	~Student();

	int GetRating() const;
	void SetRating(int rating);

	void Read();
	void Print() const override;

	Student& operator=(Student const& student);
	Student& operator=(Student&& student);
};
