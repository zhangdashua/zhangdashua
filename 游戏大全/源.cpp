#include "标头.h"
#include "石头.h"
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
	cout << "你要玩什么游戏" << endl; Sleep(500);
	cout << "1.石头剪刀布    2.随机数   3.武侠" << endl; Sleep(500);
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