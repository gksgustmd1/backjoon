#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); 

	int n;
	int m;
	int Costmax1;
	int Costmax2;
	int package;
	int one;
	int i;

	cin >> n >> m;

	Costmax1 = 1000;
	Costmax2 = 1000;

	for (i = 0; i < m; i++)
	{
		cin >> package >> one;
		if (package < Costmax1)
		{
			Costmax1 = package;
		}

		if (one < Costmax2)
		{
			Costmax2 = one;
		}
	}

	package = n / 6;
	one = n % 6;

	if (one * Costmax2 >= Costmax1)
	{
		cout << (Costmax1 * package + Costmax1);
	}
	else if (Costmax2 * 6 < Costmax1)
	{
		cout << (n * Costmax2);
	}
	else
	{
		cout << (Costmax1 * package + one * Costmax2);
	}

	

	return 0;
}
