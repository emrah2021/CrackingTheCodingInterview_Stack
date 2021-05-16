#include <stdio.h>
#include <iostream>
#include <list>

class StackNode
{
public:
	int data;
	StackNode* next;
};

class Stack
{
public:
	int minElement = INT_MAX;
	StackNode* top = NULL;
	StackNode* pop();
	void push(StackNode* node);
	int findMinElement();
	bool isEmpty();
	void print(Stack* s);
	Stack* sort(Stack* s);
};

class Tower
{
public:
	Stack* disks;
	Tower(int i);
	void add(int i);
	void moveDisks(int n, Tower* dest, Tower* buffer);
	void print();
};

