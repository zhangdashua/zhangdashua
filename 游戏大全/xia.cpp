#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <Windows.h>
using namespace std;
void xiay()
{
	string name;
	int xuan1;
	cout << "���ǣ�" << endl;
	cin >> name;
	cout << "<Ŷ" << name << "ѽ>" << endl; Sleep(500);
	cout << "<1.��ʼ�Ի�  2.ȡ��>" << endl;
	cin >> xuan1;
	switch (xuan1)
	{
	case 1:cout << "<ok>" << endl; Sleep(500); break;
	case 2:cout << "<ȡ���ǲ����ܵ�>" << endl; Sleep(500); break;
	default:cout << "<��˵ʲô>" << endl; Sleep(500); break;
	}
	cout << "�ţ���ӭ" << name << ",����С�ţ����İְ�(��Ц)" << endl; Sleep(500);
	cout << "<1.(����һ���ţ� 2.����һ�̣�>" << endl;
	int xuan2, i;
	i = 0;
	cin >> xuan2;
	if (xuan2 == 1)
	{
		while (i <= 18)
		{
			i++;
			cout << "�ţ���" << endl; Sleep(100);
			cout << name << "����" << endl; Sleep(100);
		}

		cout << "<�����ڻ�ս��ͬ���ھ��ˣ���Ϸ����>" << endl;system("pause"); exit(0);
	}
	else if (xuan2 == 2)
	{
		cout << name << "���ְֺã�����Ը��" << endl; Sleep(500);
	}
	else
	{
		cout << "<���ڹ���ʲô>" << endl;
	}
	cout << "�ţ������ô�������ģ�" << endl; Sleep(500);
	cout << "�ţ��ȿ�...������Ц�ˣ�" << name; Sleep(500);
	cout << "������Ұְֵķ��ϣ��Ҵ����������ؼ����ò���" << endl;
	int xuan3;
	cout << "<1.����   2.İ���˵��ؼ��Ҳ�Ҫ  3.��ҳ���>" << endl;
	cin >> xuan3;
	if (xuan3 == 1)
	{
		cout << "<�㼤����������껷>" << endl; Sleep(500);
		cout << "<���ϣ������ڴ��Ϻ�����˯����Ȼ������һ�������������һ�ᣬ������������֧֧���������>" << endl; Sleep(500);
		int xuan4;
		int miao = 0;
		cout << "<1.�յ��ſ�͵��   2.����˯��>" << endl;
		cin >> xuan4;
		if (xuan4 == 1)
		{
			cout << "�ţ������ǣ��Ҹ���С�ӵĻ껷����˳�˯һ������ԣ����ǿ����ɱ�ˣ���Ҫ���ۼ�" << endl; Sleep(1000);
			cout << name << ":������ô�ᣬ���ˣ�������ǹ��" << endl; Sleep(1000);
			cout << "3,"; Sleep(1000);
			cout << "2,"; Sleep(1000);
			cout << "1,"; Sleep(1000);
			cout << "�ж�" << endl; Sleep(1000);
			while (miao <= 5)
			{
				miao++;
				cout << "��"; Sleep(500);
			}
			cout << "��Ϸʤ��"; system("pause"); exit(0);
		}
		else if (xuan4 == 2)
		{
			cout << "��ҹ����ǹɱ����Ϸ����"; system("pause"); exit(0);
		}
		else
		{
			cout << "�㷸����"; system("pause"); exit(0);
		}
	}
	else if (xuan3 == 2)
	{
		cout << "�ڶ��죬������˽�ʬ" << endl; Sleep(1000);
		cout << name << ":wc,�ҳ��˽�ʬ" << endl;
		int xuan5;
		cout << "<1.�ӻ�������   2.����ҩƷ>" << endl;
		cin >> xuan5;
		if (xuan5 == 1)
		{
			cout << "��ɫ�������ˣ�"; Sleep(500);
			cout << "�ж���" << endl; Sleep(2000);
			cout << "�ڣ���������ѪҺ��" << endl; Sleep(500);
			cout << "��Ϸʤ��"; system("pause"); exit(0);
		}
		else if (xuan5 == 2)
		{
			cout << "ҩƷ���Ժܴ�" << endl; Sleep(500);
			cout << name << ":�ۡ�������������Ѫ��" << endl; Sleep(800);
			cout << "��Ϸ����"; system("pause"); exit(0);
		}
		else
		{
			cout << "���ڹ���ʲô"; system("pause"); exit(0);

		}
	}
	else if (xuan3 == 3)
	{
		cout << "����ѽ�ߣ��ߵ�һ��������" << endl; Sleep(500);
		cout << "�����ˣ�ƶɮ�����ܶ����꣬��������סס��" << endl; Sleep(1000);
		int xuanze;
		cout << "<1.����   2.�뿪�������ͷ>" << endl;
		cin >> xuanze;
		if (xuanze == 1)
		{
			cout << "���������书�츳�����Ϲ�ע" << endl; Sleep(1000);
			cout << "�������Ϊ���书��ţ������˷���" << endl; Sleep(1000);
			cout << "��������˴������" << endl; Sleep(1000);
			cout << "��Ϸʤ��"; system("pause"); exit(0);
		}
		else if (xuanze == 2)
		{
			cout << "����ʱ�ڣ��㶳������·��" << endl; Sleep(500);
			cout << "��Ϸ����" << endl; system("pause"); exit(0);
		}
		else
		{
			cout << "������������"; system("pause"); exit(0);
		}
	}
	else
	{
		cout << "what?????"; system("pause"); exit(0);
	}
	return;
}