#include <iostream>
#include <string>
using namespace std;

int main()
{
	string result, s;
	while (cin >> s)
	{
		result += s;
	}
	cout << result << endl;
	return 0;
}

int main()
{
	string result, s;
	while (cin >> s)
	{
		result += s + " ";
	}
	cout << result << endl;
	return 0;
}