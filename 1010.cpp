#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	int n;
	long long m;
	int i;
	long long j;
	long long k;
	long long result;



	cin >> t;

	for (i = 0; i < t; i++)
	{
		result = 1;

		cin >> n >> m;

		if (n > (m / 2))
		{
			n = (m - n);
		}

		for (j = 0; j < n; j++)
		{
			result *= (m - j);
		}
		for (k = 0; k < n; k++)
		{
			result /= (k + 1);
		}

		cout << result << endl;
	}

	return 0;
}


