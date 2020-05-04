#include "Stack.h"
#include <iostream>
using namespace std;


void Stack::push(double value)
{
	Node*el = new Node;//�������� ������
	el->data = value;//������������ �� ������ ��
	if (stack == nullptr)
	{
		el->next = nullptr;
		stack = el;
	}
	else
	{
		el->next = stack;
		stack = el;
	}
}

double Stack::pop()
{
	int res = stack->data;
	Node*tmp = stack;
	stack = stack->next;
	delete tmp;
	return res;
}

void Stack::print()
{
	Node*tmp = this->stack; //��� ����, ����� �� ���������� ���� 
	while (tmp != nullptr)
	{
		cout << tmp->data <<"\n";
		tmp = tmp->next;//������� ������ �� ���� ������� ������ 
	}
}

Stack& Stack::operator++()
{
	Node*tmp = stack;
	while (tmp!=nullptr)
	{
		tmp->data+=0.5;
		tmp = tmp->next;
	}
	return *this;///������ �� ������� ������, ��� ������ ����������� ��������
} 

Stack & Stack::operator--()
{
	Node*tmp = stack;
	while (tmp != nullptr)
	{
		tmp->data--;
		tmp = tmp->next;
	}
	return *this;
}

Stack & Stack::operator!() ///���������� ������ �� ������� ������ 
{
	Node*tmp = stack;
	while (tmp != nullptr)
	{
		tmp->data*=-1;
		tmp = tmp->next;
	}
	return *this;
}

Stack::Stack(const Stack & st)///������, ������ ��� ��� �� ������ ����� �������, �� � ����������, ������ ��� �� ��� ������ ������ �� ���������� 
{
	Stack s;
	Node*tmp = st.stack;
	while (tmp != nullptr)///������, ������� �� �������� ������ 
	{
		s.push(tmp->data);
		tmp = tmp->next;
	}
	while (!s.isempty())
	{
		this->push(s.pop());
	}
}

bool Stack::isempty()
{
	return this->stack==nullptr;
}

Stack::Stack()
{
	this->stack = nullptr;
}


Stack::~Stack()
{
	while (!this->isempty())
	{
		this->pop();
	}
}


