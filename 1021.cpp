#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

deque<int> dq;

int main(void)
{
    int n;
    int m;
    int result;
    int left;
    int right;
    int index;
    int cur;
    int num;

    result = 0;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        dq.push_back(i);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> index;
        cur = 1;

        for (deque<int>::iterator iter = dq.begin(); iter < dq.end(); iter++)
        {
            if (*iter == index)
            {
                break;
            }

            cur++;
        }
    

        left = cur - 1;
        right = dq.size() - cur + 1;

        if (left < right)
        {
            for (int j = 1; j <= left; j++)
            {
                num = dq.front();
                dq.pop_front();
                dq.push_back(num);
                result++;   
            }
            dq.pop_front();
        }
        else
        {
            for (int j = 1; j <= right; j++)
            {
                num = dq.back();
                dq.pop_back();
                dq.push_front(num);
                result++;
            }
            dq.pop_front();
        }
    }

    cout << result << '\n';

    return 0;
}
