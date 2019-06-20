#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item temp,total;
	if (cin >> total)
	{
		while (cin >> temp)
		{
			if (temp.isbn() == total.isbn())
			{
				total += temp;
			}
			else
			{
				cout << total << endl;
				total = temp;
			}
		}
	}
	return 0;
}