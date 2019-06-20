#include <iostream>
#include <string>
using namespace std;
main()
{
	string str = "Hello";
	string phrase = "Hello World";
	string slang = "Hiya";

	if (str < phrase) cout << "str is smaller" << endl;
	if (slang > str) cout << "slang is greater" << endl;
	if (slang > phrase) cout << "slang is greater" << endl;

	return 0;
}