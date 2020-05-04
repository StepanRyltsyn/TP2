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
	Stack&/*������ �� ������� ������, ��� ������� ����� ��������� ��������*/ operator++();//�����������
	Stack& operator--();//���������� 
	Stack& operator!();
	friend Stack &operator++(Stack& st, int n/*���� �������� ������� ���������� �� �����������*/);//����������++
	friend double operator--(Stack& st, int n);//����������� 
	Stack(const Stack &st);
	bool isempty();
	Stack();
	~Stack();
};


