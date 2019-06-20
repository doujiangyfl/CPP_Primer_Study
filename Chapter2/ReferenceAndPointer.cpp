#include <iostream>
int main()
{
	int i = 1024, *p = &i, &r = i;

	std::cout << i << " " << *p << " " << r << std::endl;

	int j = 42, *p2 = &j;
	int *&pref = p2; 
	std::cout << *pref << std::endl;

	pref = &i;
	std::cout << *pref << std::endl;

	*pref = 0;  
	std::cout << i << " " << *pref << std::endl;
	return 0;
}