#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int total;
	int* div = new int[total];
	int i;

	cin >> total;



	for (i = 0; i < total; i++)
	{
		cin >> div[i];
	}

	sort(div, div + total);

	cout << div[0] * div[total - 1];

	return 0;

}
