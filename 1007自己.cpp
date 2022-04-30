	for (int i = 0; i < h; i++)
	{
		cout << p[i]<<endl;
	}


	int* p = new int[y];//根据素数的个数去开辟空间
	assert(p != 0);

#include<iostream>
#include<assert.h>
using namespace std;

int pansu(int i)
{
	for (int o = 2; o < i; o++)
	{
		if (i % o == 0)
		{
			return 0;
		}
	}
	if (i != 1)
	{
		return 1;
	}
	else { return 0; }
	
}

int main()
{
	int n;
	cin >> n;//输入要判断的正整数范围
	int k;//接收判断的结果
	int y=0;//判断要给开辟多少空间
	for (int i = 1; i <= n; i++)//先判断有多少个素数要存
	{
		k=pansu(i);
		if (k == 1)
		{
			y++;
			k = 1;
		}
	}
	int p[10000] = {};

	int h = 0;//这是存入素数后个数的判断
	for (int i = 1; i <= n; i++)
	{
		k = pansu(i);
		if (k == 1)
		{
			p[h] = i;
			h++;
		}
	}

	int u = 0;//用来统计有多少个质数对
	for (int i = 0; i < h - 1; i++)
	{
		if (p[i + 1] - p[i] == 2)
		{
			u++;
		}
		
	}
	cout << u;
	system("pause");
}

做题心得：我在做题的时候没有考虑到算法设计的要求，用了额外太多的辅助空间去完成任务，因此在以后的算法设计中尽量去考虑四个步骤
都要有，并且做到很好。看完柳神的参考答案后，发现柳神并没有使用额外的辅助空间去完成这件任务