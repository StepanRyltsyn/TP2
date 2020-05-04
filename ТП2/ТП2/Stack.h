#pragma once
struct Node
{
	double data;
	Node *next;
};
class Stack
{
private:
	Node*stack;
public:
	void push(double value);
	double pop();
	void print();
	Stack&/*ссылка на текущий объект, над которым будем выполнять операцию*/ operator++();//постфиксный
	Stack& operator--();//префиксный 
	Stack& operator!();
	friend Stack &operator++(Stack& st, int n/*чтоб оператор отличал префиксную от постфиксной*/);//префиксный++
	friend double operator--(Stack& st, int n);//постфиксный 
	Stack(const Stack &st);
	bool isempty();
	Stack();
	~Stack();
};


