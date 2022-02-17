#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x1;
	int y1;
	int r1;
	int x2;
	int y2;
	int r2;
	int T;
	int distance;
	int result1;
	int result2;
	int i;

	cin >> T;

	for (i = 0; i < T; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		distance = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

		result1 = (r1 - r2) * (r1 - r2);
		result2 = (r1 + r2) * (r1 + r2);

		if (distance == 0)
		{
			if (result1 == 0)
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}
		}
		else if (distance == result1 || distance == result2)
		{
			cout << "1" << endl;
		}
		else if (result1 < distance && distance < result2)
		{
			cout << "2" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}

	

	return 0;

}




