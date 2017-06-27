#include<iostream>
#include"Order.h"


enum SupplimentType
{
	Bacon,
	Onion,
	Chocolate,
	Jam
};

IOrder* AddSuppliment(IOrder* order, SupplimentType type)
{
	switch (type)
	{
	case Bacon:		
		return new BaconSup(order);		
	case Onion:
		return new OnionSup(order);
	case Chocolate:
		return new ChocolateSup(order);
	case Jam:
		return new JamSup(order);
	default:
		return order;
	}
}

void PrintCheck(IOrder* order)
{
	std::cout << "Your order:\n" <<
		order->GetName() << "\n\n" <<
		"Cost: " << order->GetCost() << "\n";
}

int main()
{
	IOrder* order = new CheeseAndTomatoPancake();
	order = AddSuppliment(order, Bacon);
	order = AddSuppliment(order, Onion);

	PrintCheck(order);
	delete order;

	return 0;
}
