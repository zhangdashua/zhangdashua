#include <iostream>
#include <string>
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
void newg(myg *p);
void printf(myg *p);
int cz(myg *p, string czshu);
void del(myg *p, int a);
void chazhao(myg *p, int a);
void sgai(myg *p, int a);
