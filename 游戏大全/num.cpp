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
	cout << "����������" << endl;
	do
	{
		cin >> a;
		if (a == mun)
		{
			cout << "����" << endl;
			break;

		}
		else if (a<mun)
		{
			cout << "̫С��" << endl;

		}
		else
		{
			cout << "̫����" << endl;
		}

	} while (true);
	return;
}