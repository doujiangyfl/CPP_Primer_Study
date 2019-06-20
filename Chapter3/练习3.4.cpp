#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		if (str1 == str2)
			cout << "two string are equal" << endl;
		else
			cout << "large string is" << ((str1 > str2) ? str1 : str2) << endl;
	}
	return 0;
}

int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		if (str1.size() == str2.size())
			cout << "The two strings have the same length." << endl;
		else
			cout << "The longer string is " << ((str1.size() > str2.size()) ? str1 : str2) << endl;
	}
	return 0;
}