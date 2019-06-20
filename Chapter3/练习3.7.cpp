#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "this is a string";

	for (char x : s)
	{
		x = 'X';
	}

	cout << s << endl;
	return 0;
}