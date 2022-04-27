#include<iostream>
#include<string>
using namespace std;

struct student
{
	int point;
	string H;
	string name;
};

int main()
{
	student arr[500] = {};
	int n;
	int k = 0;
	int b;//记录分数
	string c;//姓名
	string d;//学号
	cin >> n;
	for (; k < n; k++)
	{
		cin >> arr[k].name >> arr[k].H >> arr[k].point;
	}
	

	for (int i = 0; i < n-1; i++)
	{
		for (int k = 0; k < n - 1 - i; k++)
		{
			if (arr[k].point > arr[k + 1].point)
			{
				c=arr[k + 1].name;
				d = arr[k + 1].H;
				b = arr[k + 1].point;

				arr[k+1].name = arr[k].name;
				arr[k+1].H = arr[k].H;
				arr[k + 1].point = arr[k].point;

				arr[k].name = c;
				arr[k].H = d;
				arr[k].point = b;
			}
		}
	}
	cout << arr[n - 1].name<<" " << arr[n - 1].H << endl;
	cout << arr[0].name << " " << arr[0].H;
}