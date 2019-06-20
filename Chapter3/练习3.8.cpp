#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "this is a string";

	decltype(s.size()) i = 0;
	while (i != s.size())
	{
		s[i] = 'X';
		++i;
	}
	cout << s << endl;
	for (i = 0; i != s.size(); ++i)
	{
		s[i] = 'Y';
	}
	cout << s << endl;
	return 0;
}