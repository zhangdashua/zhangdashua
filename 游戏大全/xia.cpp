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
	cout << "你是？" << endl;
	cin >> name;
	cout << "<哦" << name << "呀>" << endl; Sleep(500);
	cout << "<1.开始对话  2.取消>" << endl;
	cin >> xuan1;
	switch (xuan1)
	{
	case 1:cout << "<ok>" << endl; Sleep(500); break;
	case 2:cout << "<取消是不可能的>" << endl; Sleep(500); break;
	default:cout << "<你说什么>" << endl; Sleep(500); break;
	}
	cout << "张：欢迎" << name << ",我是小张，您的爸爸(坏笑)" << endl; Sleep(500);
	cout << "<1.(暴打一顿张） 2.（忍一忍）>" << endl;
	int xuan2, i;
	i = 0;
	cin >> xuan2;
	if (xuan2 == 1)
	{
		while (i <= 18)
		{
			i++;
			cout << "张：打" << endl; Sleep(100);
			cout << name << "：打" << endl; Sleep(100);
		}

		cout << "<你们在混战中同归于尽了，游戏结束>" << endl;system("pause"); exit(0);
	}
	else if (xuan2 == 2)
	{
		cout << name << "：爸爸好（不情愿）" << endl; Sleep(500);
	}
	else
	{
		cout << "<你在狗叫什么>" << endl;
	}
	cout << "张：诶，好大儿（开心）" << endl; Sleep(500);
	cout << "张：咳咳...开个玩笑了，" << name; Sleep(500);
	cout << "看你叫我爸爸的份上，我传授你武林秘籍，好不好" << endl;
	int xuan3;
	cout << "<1.接受   2.陌生人的秘籍我不要  3.离家出走>" << endl;
	cin >> xuan3;
	if (xuan3 == 1)
	{
		cout << "<你激发了三万年魂环>" << endl; Sleep(500);
		cout << "<晚上，你躺在床上呼呼大睡，忽然听见了一阵关门声，过了一会，听见了门外有支支吾吾的声音>" << endl; Sleep(500);
		int xuan4;
		int miao = 0;
		cout << "<1.凑到门口偷听   2.继续睡觉>" << endl;
		cin >> xuan4;
		if (xuan4 == 1)
		{
			cout << "张：弟兄们，我给那小子的魂环里加了沉睡一天的属性，你们快把他杀了，不要留痕迹" << endl; Sleep(1000);
			cout << name << ":哎，怎么会，算了（拿起手枪）" << endl; Sleep(1000);
			cout << "3,"; Sleep(1000);
			cout << "2,"; Sleep(1000);
			cout << "1,"; Sleep(1000);
			cout << "行动" << endl; Sleep(1000);
			while (miao <= 5)
			{
				miao++;
				cout << "嘭"; Sleep(500);
			}
			cout << "游戏胜利"; system("pause"); exit(0);
		}
		else if (xuan4 == 2)
		{
			cout << "半夜您被枪杀，游戏结束"; system("pause"); exit(0);
		}
		else
		{
			cout << "你犯规了"; system("pause"); exit(0);
		}
	}
	else if (xuan3 == 2)
	{
		cout << "第二天，你变异了僵尸" << endl; Sleep(1000);
		cout << name << ":wc,我成了僵尸" << endl;
		int xuan5;
		cout << "<1.接机除掉张   2.服下药品>" << endl;
		cin >> xuan5;
		if (xuan5 == 1)
		{
			cout << "天色渐渐暗了，"; Sleep(500);
			cout << "行动！" << endl; Sleep(2000);
			cout << "呲！！！！（血液）" << endl; Sleep(500);
			cout << "游戏胜利"; system("pause"); exit(0);
		}
		else if (xuan5 == 2)
		{
			cout << "药品毒性很大" << endl; Sleep(500);
			cout << name << ":噗。。。。。（吐血）" << endl; Sleep(800);
			cout << "游戏结束"; system("pause"); exit(0);
		}
		else
		{
			cout << "你在狗叫什么"; system("pause"); exit(0);

		}
	}
	else if (xuan3 == 3)
	{
		cout << "你走呀走，走到一个寺庙里" << endl; Sleep(500);
		cout << "出家人：贫僧见你受饿多年，来我寺庙住住吧" << endl; Sleep(1000);
		int xuanze;
		cout << "<1.留下   2.离开，流落街头>" << endl;
		cin >> xuanze;
		if (xuanze == 1)
		{
			cout << "你在庙里武功天赋被长老关注" << endl; Sleep(1000);
			cout << "你后来成为了武功奇才，当上了方丈" << endl; Sleep(1000);
			cout << "最后，你派人打败了张" << endl; Sleep(1000);
			cout << "游戏胜利"; system("pause"); exit(0);
		}
		else if (xuanze == 2)
		{
			cout << "寒冬时节，你冻死在了路边" << endl; Sleep(500);
			cout << "游戏结束" << endl; system("pause"); exit(0);
		}
		else
		{
			cout << "你在哔哔神马"; system("pause"); exit(0);
		}
	}
	else
	{
		cout << "what?????"; system("pause"); exit(0);
	}
	return;
}