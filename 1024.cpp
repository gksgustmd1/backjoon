#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>


using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int l;
	int t;
	int x;
	int iter;
	int i;

	t = -1;
	x = -1;
	iter = -1;

	cin >> n >> l;

	for (i = l; i <= 100; i++)
	{
		t = (i - 1) * i / 2;
		if ((n - t) % i == 0 && (n - t) / i >= 0)
		{
			x = (n - t) / i;
			iter = i;
			break;
		}
	}

	if (x == -1)
	{
		cout << -1;
	}
	else
	{
		for (i = 0; i < iter; i++)
		{
			cout << x + i << ' ';
		}
	}
	return 0;
}



