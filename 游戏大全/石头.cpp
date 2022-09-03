#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int aff(int sss)
{
	int ccc;
	srand((unsigned)time(NULL));
	cout << "你好，欢迎来玩石头剪刀布" << endl;
	while (true)
	{
	LOOP:
		cout << "[0].退出   [1].石头   [2].剪刀   [3]布" << endl;
		cin >> sss;
		if (sss== 0)
		{
			break;
		}
		else if (sss != 1 && sss != 2 && sss != 3)
		{
			cout << "输错了" << endl;
			goto LOOP;
		}
		ccc = rand() % 3 + 1;
		if (ccc == 1)
			cout << "computer出石头" << endl;
		else if (ccc == 2)
			cout << "computer出剪刀" << endl;
		else if (ccc == 3)
			cout << "computer出布" << endl;
		int c = ccc - sss;
		if (c == 0)
		{
			cout << "平" << endl;
		}
		else if (c == 1 || c == -2)
		{
			cout << "你赢了" << endl;
		}
		else
		{
			cout << "你输了" << endl;
		}
	}
	return 1;
}
