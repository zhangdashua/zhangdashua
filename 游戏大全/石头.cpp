#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int aff(int sss)
{
	int ccc;
	srand((unsigned)time(NULL));
	cout << "��ã���ӭ����ʯͷ������" << endl;
	while (true)
	{
	LOOP:
		cout << "[0].�˳�   [1].ʯͷ   [2].����   [3]��" << endl;
		cin >> sss;
		if (sss== 0)
		{
			break;
		}
		else if (sss != 1 && sss != 2 && sss != 3)
		{
			cout << "�����" << endl;
			goto LOOP;
		}
		ccc = rand() % 3 + 1;
		if (ccc == 1)
			cout << "computer��ʯͷ" << endl;
		else if (ccc == 2)
			cout << "computer������" << endl;
		else if (ccc == 3)
			cout << "computer����" << endl;
		int c = ccc - sss;
		if (c == 0)
		{
			cout << "ƽ" << endl;
		}
		else if (c == 1 || c == -2)
		{
			cout << "��Ӯ��" << endl;
		}
		else
		{
			cout << "������" << endl;
		}
	}
	return 1;
}
