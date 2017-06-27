#pragma once
#pragma once
#include<string>

class IOrder
{
public:	
	virtual ~IOrder() = default;

	virtual std::string GetName() = 0;
	virtual double GetCost() = 0;
private:

};

class Pancake : public IOrder
{
public:
	std::string GetName()
	{
		return "Pancake with butter";
	}

	double GetCost()
	{
		return 0.5;
	}	
};



class CheeseAndTomatoPancake : public IOrder
{
public:
	std::string GetName()
	{
		return "Pancake with cheese and tomato";
	}
	double GetCost()
	{
		return 1.5;
	}
};


class BananaPancake : public IOrder
{
public:
	std::string GetName()
	{
		return "Pancake banana";
	}
	double GetCost()
	{
		return 1.0;
	}
};


class StrawberryPancake : public IOrder
{
public:
	std::string GetName()
	{
		return "Pancake with Strawberry";
	}
	double GetCost()
	{
		return 1.2;
	}
};


class Suppliments : public IOrder
{
private:
	IOrder* m_decorate;
	double m_cost;
	std::string m_name;
public:
	Suppliments(IOrder* decorate, double cost, std::string name) :
		m_decorate(decorate),
		m_cost(cost),
		m_name(name)
	{
	}

	~Suppliments()
	{
		delete m_decorate;
	}

	double GetCost()
	{
		return m_decorate->GetCost() + m_cost;
	}

	std::string GetName()
	{
		return m_decorate->GetName() + ", " + m_name;
	}
};

class BaconSup : public Suppliments
{
public:
	BaconSup(IOrder* decorate):Suppliments(decorate, 0.5, "bacon")
	{		
	}
};


class OnionSup : public Suppliments
{
public:
	OnionSup(IOrder* decorate) :Suppliments(decorate, 0.2, "onion")
	{
	}
};

class ChocolateSup : public Suppliments
{
public:
	ChocolateSup(IOrder* decorate) :Suppliments(decorate, 0.8, "Chocolate")
	{
	}
};



class JamSup : public Suppliments
{
public:
	JamSup(IOrder* decorate) :Suppliments(decorate, 0.5, "Jam")
	{
	}
};
