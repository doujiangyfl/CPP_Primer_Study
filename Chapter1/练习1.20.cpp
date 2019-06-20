#include <iostream>
#include "Sales_item.h"

int main()
{
	for (Sales_item sale_item; std::cin >> sale_item; std::cout << sale_item << std::endl);
	return 0;
}