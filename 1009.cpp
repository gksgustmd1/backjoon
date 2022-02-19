#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T;
	int i;
	int j;
	int a;
	int b;
	int temp;

	scanf("%d", &T); 

	for (i = 0; i < T; i++) 
	{
		scanf("%d %d", &a, &b); 
		temp = a;
		for (j = 1; j < b; j++) 
		{
			temp = temp * a % 10;  
		}
		if (temp % 10 == 0)
		{
			printf("%d\n", 10);
		}
		else
		{
			printf("%d\n", temp % 10);
		}
	
	}
	
}


