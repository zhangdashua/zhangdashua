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
			cout << "��Ҫɾ��ʲô��Ʒ" << endl;
			cin >> czname;
			int aaa = cz(&book, czname);
			del(&book, aaa);
		}
		break;
		case 3:
		{
			string chname;
			cout << "��Ҫ����ʲô��Ʒ" << endl;
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
			cout << "��Ҫ�޸�ʲô��Ʒ" << endl;
			cin >> chame;
			int ccc = cz(&book, chame);
			sgai(&book, ccc);
		}
		break;
		case 0:
			cout << "��ӭ��һ��ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}