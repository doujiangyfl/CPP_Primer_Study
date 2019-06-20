#include <iostream>
#include <string>
using namespace std;

//读入一行
int main()
{
	string s;
	while (getline(cin, s))
	{
		cout << s << endl;
	}
	return 0;
}

//读入一个词
int main()
{
	string s;
	while (cin >> s)
	{
		cout << s << endl;
	}
	return 0;
}