#include "Stack.h"
#include <iostream>
using namespace std;


void Stack::push(double value)
{
	Node*el = new Node;//выделяем память
	el->data = value;//иницилизация зн нового эл
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
	Node*tmp = this->stack; //для того, чтобы не уничтожить стек 
	while (tmp != nullptr)
	{
		cout << tmp->data <<"\n";
		tmp = tmp->next;//смещаем ссылку на один элемент вперед 
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
	return *this;///ссылка на текущий объект, над котрым производили операцию
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

Stack & Stack::operator!() ///возвращает ссылку на текущий объект 
{
	Node*tmp = stack;
	while (tmp != nullptr)
	{
		tmp->data*=-1;
		tmp = tmp->next;
	}
	return *this;
}

Stack::Stack(const Stack & st)///ссылка, потому что нам не нужнка копия объекта, он а костантная, потому что мы там ничего менять не собираемся 
{
	Stack s;
	Node*tmp = st.stack;
	while (tmp != nullptr)///объект, который мы копируем пустой 
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


