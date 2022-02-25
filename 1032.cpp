#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int i;
	int j;
	string s;
	string result;
	string t;

	cin >> n;
	cin >> s;

	result = s;

	for (i = 1; i < n; i++)
	{
		cin >> t;

		for (j = 0; j < s.length(); j++)
		{
			if (s[j] != t[j])
			{
				result[j] = '?';
			}
		}
	}

	cout << result << "\n";

	return 0;


}

