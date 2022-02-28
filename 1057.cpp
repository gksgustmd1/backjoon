#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;
unsigned long long fac(unsigned long long n);

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int a;
	int b;
	int result;

	result = 0;

	cin >> n >> a >> b;

	while (a != b)
	{
		a = a - a / 2;
		b = b - b / 2;
		result += 1;
	}

	cout << result << '\n';
	

}


