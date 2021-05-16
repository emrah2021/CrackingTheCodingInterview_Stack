#include "SetOfStacks.h"

using namespace std;

SetOfStacks::SetOfStacks(int cap)
{
	capacity = cap;
}

StackNode * SetOfStacks::pop()
{
	StackNode* tempNode = stackList.back()->pop();
	if (!(tempNode == NULL))
	{
		stackListSize.back() = stackListSize.back() - 1;
	}

	if (stackList.back()->isEmpty())
	{
		stackList.pop_back();
		stackListSize.pop_back();
	}

	return tempNode;
}

void SetOfStacks::push(StackNode * node)
{
	StackNode* newObject = new StackNode();
	newObject->data = node->data;

	if ((!stackListSize.empty()) && (stackListSize.back() != capacity))
	{
		stackList.back()->push(newObject);
		stackListSize.back() = stackListSize.back() + 1;
	}
	else
	{
		Stack* newStack = new Stack();
		newStack->push(newObject);
		stackList.push_back(newStack);
		stackListSize.push_back(1);
	}
}
