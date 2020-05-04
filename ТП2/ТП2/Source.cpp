#include <iostream>
#include "Long.h"
#include "Stack.h"
using namespace std;
Stack & operator++(Stack& st, int n)
{
	cout << "������� �����: ";
	double f = 0;
	cin >> f;
	st.push(f);
	return st;
}

double operator--(Stack& st, int n)
{
	return st.pop();
}
int main()
{
	setlocale(0,"RU");
	int n;
	Stack s;
	Long* l=nullptr;
	Long* l2=nullptr;
	Long* l3;
	bool isrun = true;
	int action;
	while (isrun)
	{
		cout << "1-������� ����" << endl;
		cout << "2-����� ����� �� �����" << endl;
		cout << "3-��������� �������� ����� �� 1" << endl;
		cout << "4-��������� �������� ����� �� 0.5" << endl;
		cout << "5-������� ������� �� �������" << endl;
		cout << "6-�������� ������� � ������� " << endl;
		cout << "7-���� �����" << endl;
		cout << "8-������� �����" << endl;
		cout << "9-������� �����" << endl;
		cout << "10-�����" << endl;
		cin >> action;
		switch (action)
		{
		case 1:
			cout << "������� ������ �����: ";
			cin >> n;
			cout << "������� �������� �����: " << endl;
			for (int i = 0; i < n; i++)
			{
				int a;
				cin >> a;
				s.push(a);
			}
			cout << "���� ������"<<endl;
			break;
		case 2:
			s.print();
			cout << endl;
			break;
		case 3:
			--s;
			cout << "�������� ���������" << endl;
			break;
		case 4:
			++s;
			cout << "�������� ���������" << endl;
			break;
		case 5:
			s--;
			cout << "������� ��������" << endl;
			break;
		case 6:
			s++;
			cout << "������� ��������" << endl;
			break;
		case 7:
			cout << "��������� ������ �����" << endl;
			int w;
			cin >> w;
			l = new Long(w);
			cout << "������� ������ �����" << endl;
			cin>>w;
			l2 = new Long(w);
			break;
		case 8:
			if (l == nullptr || l2 == nullptr)
			{
				cout << "������� �� ��� �����" << endl;
			}
			else
			{
				cout << "��������� ��������: " << (*l + *l2)->getValue() << endl;
			}
			break;
		case 9:
			if (l == nullptr || l2 == nullptr)
			{
				cout << "������� �� ��� �����" << endl;
			}
			else
			{
				cout << "��������� ��������: " << (*l - *l2)->getValue() << endl;
			}
			break;
		case 10:
			isrun = 0;
			break;
		}
		
		

	}
	system("pause>>void");
}