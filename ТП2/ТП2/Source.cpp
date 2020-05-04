#include <iostream>
#include "Long.h"
#include "Stack.h"
using namespace std;
Stack & operator++(Stack& st, int n)
{
	cout << "Введите число: ";
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
		cout << "1-Создать стек" << endl;
		cout << "2-Вывод стека на экран" << endl;
		cout << "3-Уменьшить значения стека на 1" << endl;
		cout << "4-Увеличить значения стека на 0.5" << endl;
		cout << "5-Извлечь элемент из очереди" << endl;
		cout << "6-Добавить элемент в очередь " << endl;
		cout << "7-Ввод чисел" << endl;
		cout << "8-Сложить числа" << endl;
		cout << "9-Вычесть числа" << endl;
		cout << "10-Выход" << endl;
		cin >> action;
		switch (action)
		{
		case 1:
			cout << "Введите размер стека: ";
			cin >> n;
			cout << "Введите элементы стека: " << endl;
			for (int i = 0; i < n; i++)
			{
				int a;
				cin >> a;
				s.push(a);
			}
			cout << "Стек создан"<<endl;
			break;
		case 2:
			s.print();
			cout << endl;
			break;
		case 3:
			--s;
			cout << "Значения уменьшены" << endl;
			break;
		case 4:
			++s;
			cout << "Значения увеличины" << endl;
			break;
		case 5:
			s--;
			cout << "Элемент извлечен" << endl;
			break;
		case 6:
			s++;
			cout << "Элемент добавлен" << endl;
			break;
		case 7:
			cout << "Введитите первое число" << endl;
			int w;
			cin >> w;
			l = new Long(w);
			cout << "Введите второе число" << endl;
			cin>>w;
			l2 = new Long(w);
			break;
		case 8:
			if (l == nullptr || l2 == nullptr)
			{
				cout << "Введены не все числа" << endl;
			}
			else
			{
				cout << "Результат сложения: " << (*l + *l2)->getValue() << endl;
			}
			break;
		case 9:
			if (l == nullptr || l2 == nullptr)
			{
				cout << "Введены не все числа" << endl;
			}
			else
			{
				cout << "Результат сложения: " << (*l - *l2)->getValue() << endl;
			}
			break;
		case 10:
			isrun = 0;
			break;
		}
		
		

	}
	system("pause>>void");
}