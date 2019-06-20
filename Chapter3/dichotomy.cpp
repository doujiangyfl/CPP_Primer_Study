#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	//textÎªÓĞĞòĞòÁĞ
	vector<int> text;
	int sought;
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2;
	while (mid != end && *mid != sought)
	{
		if (sought < *mid)
		{
			end = mid;
		}
		else
		{
			beg = mid + 1;
		}
		mid = beg + (end - beg) / 2;
	}
}