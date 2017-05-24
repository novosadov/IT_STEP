#pragma once

class Group
{
};

class Student
{
private:
	char* m_name = 0;
	int m_rating;
	Group& m_group;

public:
	Student(Group& group);
	Student(Group& group, char const* name, int rating);
	Student(Student const& student); //конструктор копирования

	~Student();

	char const* GetName() const;
	int GetRating();

	void SetName(char const* name);
	void SetRating(int rating);

	void Read();
	void Print();
};
