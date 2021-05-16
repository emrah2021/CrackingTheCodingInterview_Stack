#pragma once
#include <stdio.h>
#include <iostream>
#include <list>
#include <iterator>
#include "Stack.h"

class SetOfStacks
{
	int capacity;
	std::list<Stack*> stackList;
	std::list<int> stackListSize;
public:
	SetOfStacks(int cap);
	StackNode* pop();
	void push(StackNode* node);
};
