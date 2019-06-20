#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s = "this, is. a :string!";
	string result;
	for (auto x : s)
	{
		if (!ispunct(x))
		{
			result += x;
		}
	}
	cout << result << endl;
	return 0;
}