#pragma once

#include <list>
#include <string>
#include <iosfwd>
#include <exception>

class Person
{
protected:
	std::string m_name;

public:
	Person() = default;
	Person(std::string const& name);
	virtual ~Person() = default;

	void SetName(std::string const& name);
	std::string const& GetName() const;

	virtual void Print() const;
};

class PersonList
{
	std::list<Person*> m_data;

public:
	~PersonList();
	void Add(Person* person);
	void Print() const;
};
