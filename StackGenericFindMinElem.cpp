#include <stdio.h>
#include <iostream>
#include <list>
#include <map>
#include "Node.h"
#include "Stack.h"
#include "SetOfStacks.h"

int main()
{
	// Stack section
	Stack* s = new Stack();
	StackNode* sn1 = new StackNode();
	sn1->data = 2;
	StackNode* sn2 = new StackNode();
	sn2->data = 0;
	StackNode* sn3 = new StackNode();
	sn3->data = 4;
	StackNode* sn4 = new StackNode();
	sn4->data = 3;
	StackNode* sn5 = new StackNode();
	sn5->data = 1;
	s->push(sn1);
	s->push(sn2);
	s->push(sn3);
	s->push(sn4);
	s->push(sn5);
	s->pop;
	s->push(sn5);
	int minElem = s->findMinElement();
	cout << "minElem: " << minElem << endl;
	s = s->sort(s);
	s->print(s);
  
  cin.get();
	return 0;
}
