#include <iostream>
#include <string>
#include <iomanip>
#define MAX 1000
using namespace std;
struct goods
{
	string name;
	float money;
	string danwen;
};
struct myg
{
	int num;
	goods arr[MAX];
};
void newg(myg *p)
{
	if (p->num >= 1000)
	{
		cout << "��Ʒ����" << endl;
		return;
	}
	else
	{
		cout << "��������Ʒ��" << endl;
		string nams;
		cin >> nams;
		p->arr[p->num].name = nams;
		cout << "������۸�" << endl;
		float money;
		cin >> money;
		p->arr[p->num].money = money;
		cout << "������Ʒ��λ" << endl;
		string dw;
		cin >> dw;
		p->arr[p->num].danwen = dw;
		p->num++;
		cout << "�ɹ���" << endl;
		system("pause");
		system("cls");
		return;
	}
}
void printf(myg *p)
{

	for (int a = 0; a < p->num; a++)
	{
		cout << p->arr[a].name << "\t" << setprecision(2) << p->arr[a].money << "/" << p->arr[a].danwen << endl;
	}
	system("pause");
	system("cls");
	return;
}
int cz(myg *p, string czname)
{
	for (int i = 0; i < p->num; i++)
	{
		if (p->arr[i].name == czname)
		{
			return i;
		}
	}
	return -1;
}
void del(myg *p, int a)
{
	if (a == -1)
	{
		cout << "���޴���" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		for (int i = a + 1; i < p->num; i++)
		{
			p->arr[i - 1] = p->arr[i];
		}
		p->num--;
		cout << "ɾ���ɹ�" << endl;
		system("pause");
		system("cls");
		return;
	}
}
void chazhao(myg *p, int a)
{
	if (a == -1)
	{
		cout << "���޴���" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << p->arr[a].name << "\t" << setprecision(2) << p->arr[a].money << "/" << p->arr[a].danwen << endl;
		system("pause");
		system("cls");
		return;
	}
}
void sgai(myg *p, int a)
{
	if (a == -1)
	{
		cout << "���޴���" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "��������Ʒ��" << endl;
		string nams;
		cin >> nams;
		p->arr[a].name = nams;
		cout << "������۸�" << endl;
		float money;
		cin >> money;
		p->arr[a].money = money;
		cout << "������Ʒ��λ" << endl;
		string dw;
		cin >> dw;
		p->arr[a].danwen = dw;
		cout << "�ɹ���" << endl;
		system("pause");
		system("cls");
		return;
	}
}
/*
(?��?�F?)�� L???????
	  �깤��
*/