#include "Person.h"
#include<iostream>

Person::Person()
{
	std::cout << "Person constructor\n";
}


Person::~Person()
{
	std::cout << "Person destructor\n";
}

String const& Person::GetName() const
{
	return m_name;
}


Person::Person(String const& name):
	m_name(name)
{
}


void Person::SetName(String const& name)
{
	m_name = name;
}
