#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int ReturnColorValue(string str)
{
	int num = 0;
	if (str == "black")
		num = 0;
	else if (str == "brown")
		num = 1;
	else if (str == "red")
		num = 2;
	else if (str == "orange")
		num = 3;
	else if (str == "yellow")
		num = 4;
	else if (str == "green")
		num = 5;
	else if (str == "blue")
		num = 6;
	else if (str == "violet")
		num = 7;
	else if (str == "grey")
		num = 8;
	else if (str == "white")
		num = 9;
	return num;
}
int main()
{
	string str;
	int colorNum = 0;
	vector<int> nums;
	long long result = 0;
	// 입력 -> 입력된 컬러값 숫자로 변경
	for (int i = 0; i < 3; i++)
	{
		cin >> str;
		colorNum = ReturnColorValue(str);
		nums.push_back(colorNum);
	}

	// 계산
	result = (nums[0] * double(10) + nums[1]) * pow(10, nums[2]);
	cout << result;
}