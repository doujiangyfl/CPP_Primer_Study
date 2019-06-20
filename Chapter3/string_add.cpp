#include <iostream>
#include <string>
using namespace std;

int main()
{

	string s1 = "hello, ", s2 = "world\n";
	string s3 = s1 + s2;  
	cout << s1 << s2 << s3 << endl;

	s1 += s2;   
	cout << s1;

	string s4 = "hello", s5 = "world";  
	string s6 = s4 + ", " + s5 + '\n';
	cout << s4 << s5 << "\n" << s6 << endl;

	return 0;
}