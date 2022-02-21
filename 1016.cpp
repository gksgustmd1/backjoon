#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

long long arr[1000001];

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
    long long min; 
    long long max;
    int count;

    count = 0;

    cin >> min >> max;
    
    for (long long i = 2; i * i <= max; i++)
    {
        long long n = min / (i * i);

        if (min % (i * i))
        {
            n++;
        }
        
        while (n * i * i <= max)
        {
            arr[n * i * i - min] = 1;
            n++;
        }
    }

    for (int i = 0; i <= max - min; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
             
}


