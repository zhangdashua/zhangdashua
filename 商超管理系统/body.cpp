#include <iostream>
#include <string>
#include "hello.h"
#include "x.h"
using namespace std;
int main()
{
	myg book;
	book.num = 0;
	while (true)
	{
		hello();
		int xz;
		cin >> xz;
		switch (xz)
		{
		case 1:
			newg(&book);
			break;
		case 2:
		{
			string czname;
			cout << "你要删除什么商品" << endl;
			cin >> czname;
			int aaa = cz(&book, czname);
			del(&book, aaa);
		}
		break;
		case 3:
		{
			string chname;
			cout << "你要查找什么商品" << endl;
			cin >> chname;
			int bbb = cz(&book, chname);
			chazhao(&book, bbb);
		}
		break;
		case 4:
			printf(&book);
			break;
		case 5:
		{
			string chame;
			cout << "你要修改什么商品" << endl;
			cin >> chame;
			int ccc = cz(&book, chame);
			sgai(&book, ccc);
		}
		break;
		case 0:
			cout << "欢迎下一次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}