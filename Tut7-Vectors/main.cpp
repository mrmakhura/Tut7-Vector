#include <iostream>
#include <string>
#include <algorithm>  // for auto sort
#include <vector>	  // for auto stack

using namespace std;

int main()
{
	int x;

	vector<int> arrInt;
	for (int i = 0; i < 20; ++i)
	{
		cout << "Please enter integer : ";
		cin >> x;
		arrInt.push_back(x);
	}

	sort(arrInt.begin(), arrInt.end());



}