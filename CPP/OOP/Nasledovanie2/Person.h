#pragma once

#include "String.h"

class Person
{
protected:
	String m_name;
public:
	//Person();
	~Person();

	String const& GetName() const;
	Person(String const& name);
	void SetName(String const& name);
};


