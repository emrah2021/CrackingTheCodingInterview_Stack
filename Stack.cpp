#include "Stack.h"

using namespace std;

StackNode * Stack::pop()
{
	StackNode* tempNode = top;
	if(!(tempNode == NULL))
		top = top->next;
	return tempNode;
}

void Stack::push(StackNode * node)
{
	StackNode* newObject = new StackNode();
	newObject->data = node->data;
	newObject->next = top;
	top = newObject;
}

int Stack::findMinElement()
{
	int minElement = INT_MAX;
	StackNode* tempNode = top;

	while (tempNode != NULL)
	{
		if (tempNode->data < minElement)
			minElement = tempNode->data;

		tempNode = tempNode->next;
	}

	return minElement;
}

bool Stack::isEmpty()
{
	if (top == NULL)
		return true;
	else
		return false;
}

void Stack::print(Stack* s)
{
	while (s->top != NULL)
	{
		cout << "element: " << s->top->data << " ";
		s->pop();
	}
	cout << endl;
}

Stack* Stack::sort(Stack* s)
{
	Stack* tempStack = new Stack();

	while (s->top != NULL)
	{
		StackNode* temp = new StackNode();
		temp = s->pop();
		while (!tempStack->isEmpty() && (tempStack->top->data < temp->data))
		{
			cout << temp->data << endl;
			s->push(tempStack->pop());
		}
		tempStack->push(temp);
	}

	return tempStack;
}

Tower::Tower(int i)
{
	disks = new Stack();
}

void Tower::add(int i)
{
	if ((Tower::disks->top != NULL) && (Tower::disks->top->data < i))
		cout << "Error adding disk\n";
	else
	{
		StackNode* tempNode = new StackNode();
		tempNode->data = i;
		disks->push(tempNode);
	}
}

void Tower::moveDisks(int n, Tower* dest, Tower* buffer)
{
	if (n > 0)
	{
		moveDisks(n - 1, buffer, dest);
		if (!Tower::disks->isEmpty())
		{
			StackNode* tempNode = Tower::disks->pop();
			dest->add(tempNode->data);
			cout << "Disk: " << tempNode->data << " moved" << endl;
		}
		buffer->moveDisks(n - 1, dest, this);
	}
}

void Tower::print()
{
	while (Tower::disks->top != NULL)
	{
		cout << "disks: " << Tower::disks->top->data << " ";
		Tower::disks->pop();
	}
	cout << endl;
}
