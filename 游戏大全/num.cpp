#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void numm()
{
	srand((unsigned)time(NULL));
	int mun;
	mun = rand() % 101;
	int a;
	cout << "请输入数字" << endl;
	do
	{
		cin >> a;
		if (a == mun)
		{
			cout << "对了" << endl;
			break;

		}
		else if (a<mun)
		{
			cout << "太小了" << endl;

		}
		else
		{
			cout << "太大了" << endl;
		}

	} while (true);
	return;
}