#include "��ͷ.h"
#include "ʯͷ.h"
#include "num.h"
#include "xia.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	arst();
	cout << "��Ҫ��ʲô��Ϸ" << endl; Sleep(500);
	cout << "1.ʯͷ������    2.�����   3.����" << endl; Sleep(500);
	int cccp;
	cin >> cccp;
	if (cccp==1)
	{
		int xz=0;
		aff(xz);
	}
	else if(cccp==2)
	{
		numm();
	}
	else if(cccp==3)
	{
		xiay();
	}
	system("pause");
	return 0;
}