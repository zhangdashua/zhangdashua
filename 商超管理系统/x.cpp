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
		cout << "商品已满" << endl;
		return;
	}
	else
	{
		cout << "请输入商品名" << endl;
		string nams;
		cin >> nams;
		p->arr[p->num].name = nams;
		cout << "请输入价格" << endl;
		float money;
		cin >> money;
		p->arr[p->num].money = money;
		cout << "输入商品单位" << endl;
		string dw;
		cin >> dw;
		p->arr[p->num].danwen = dw;
		p->num++;
		cout << "成功！" << endl;
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
		cout << "查无此物" << endl;
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
		cout << "删除成功" << endl;
		system("pause");
		system("cls");
		return;
	}
}
void chazhao(myg *p, int a)
{
	if (a == -1)
	{
		cout << "查无此物" << endl;
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
		cout << "查无此物" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "请输入商品名" << endl;
		string nams;
		cin >> nams;
		p->arr[a].name = nams;
		cout << "请输入价格" << endl;
		float money;
		cin >> money;
		p->arr[a].money = money;
		cout << "输入商品单位" << endl;
		string dw;
		cin >> dw;
		p->arr[a].danwen = dw;
		cout << "成功！" << endl;
		system("pause");
		system("cls");
		return;
	}
}
/*
(?′?‵?)Ｉ L???????
	  完工了
*/