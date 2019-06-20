#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<unsigned> grades;
	const size_t sz = 11;
	unsigned score[sz] = {};
	unsigned grade;
	while (cin >> grade)
	{
		if (grade <= 100)
			++score[grade / 10];
		grades.push_back(grade);
	}
	cout << "grades.size = " << grades.size() << endl;
}