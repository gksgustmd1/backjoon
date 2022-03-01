#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);

	int L;
	int i;
	int j;
	int n;
	int arr[50];
	int max;
	int min;
	int result;

	result = 0;
	max = 0;
	min = 1;

	cin >> L;
	
	for (i = 0; i < L; i++)
	{
		cin >> arr[i];
		//cout << arr[i] << endl;
	}

	sort(arr, arr + L);
	
	cin >> n;
	
	for (i = 0; i < L; i++)
	{

		if (n <= arr[i])
		{
			max = arr[i];
			break;
		}

		min = arr[i] + 1;
	}
	
	for (i = min; i < max; i++)
	{
		for (j = i + 1; j < max; j++)
		{
			if (i <= n && n <= j)
			{
				result++;
			}
		}
	}

	cout << result;

	return 0;
}


