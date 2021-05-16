#include <stdio.h>
#include <iostream>
#include <list>
#include <map>
#include "Node.h"
#include "Stack.h"
#include "SetOfStacks.h"

int main()
{
	SetOfStacks set(3);
	StackNode* sn1 = new StackNode();
	sn1->data = 3;
	StackNode* sn2 = new StackNode();
	sn2->data = 5;
	StackNode* sn3 = new StackNode();
	sn3->data = 33;
	set.push(sn1);
	set.push(sn2);
	set.push(sn3);
	StackNode* sn4 = new StackNode();
	sn4->data = 5;
	StackNode* sn5 = new StackNode();
	sn5->data = 33;
	set.push(sn4);
	set.push(sn5);
	
	cout << set.pop()->data << endl;
	cout << set.pop()->data << endl;
	cout << set.pop()->data << endl;
  
  cin.get();
	return 0;
}
