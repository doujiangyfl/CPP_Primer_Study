#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> v;
	string s;
	while (cin >> s)
	{
		v.push_back(s);
	}
	for (auto &str : v)
	{
		for (auto &a : str)
		{
			a = toupper(a);
		}
	}
	for (auto b : v)
	{
		cout << b << endl;
	}
	return 0;
}