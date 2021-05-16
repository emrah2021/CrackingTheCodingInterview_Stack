#include <stdio.h>
#include <iostream>
#include <list>
#include <map>
#include "Node.h"
#include "Stack.h"
#include "SetOfStacks.h"

int main()
{
	int n = 4;
	Tower* t1 = new Tower(n);
	Tower* t2 = new Tower(n);
	Tower* t3 = new Tower(n);
	for (int i = n - 1; i >= 0; i--)
	{
		t1->add(i);
	}
	t1->moveDisks(n, t3, t2);
	cout << "t1: ";
	t1->print();
	cout << "t2: ";
	t2->print();
	cout << "t3: ";
	t3->print();
  
  cin.get();
	return 0;
}
