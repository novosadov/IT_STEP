#include"BinaryTree.h"
#include<iostream>
#include"Queue.h"

int main()
{
	
	Queue<int> q1;
	/*q1.Push(4);
	q1.Push(-4);
	q1.Push(9);*/
	for (int i = 0; i < 10; i++)
	{
		//q1.Push(i + 1);
		q1.Push(i + 1);
		std::cout << q1.Pop() << " ";
	}
	

	return 0;
}
