#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int i;
	int result;
	int arr1[51];
	int arr2[51];

	result = 0;

	cin >> n;

	

	for (i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}

	for (i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}

	sort(arr1, arr1 + n);
	sort(arr2, arr2 + n);

	for (i = 0; i < n; i++)
	{
		result += arr1[n - 1 - i] * arr2[i];
	}

	cout << result;

}


