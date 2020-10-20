#include <iostream>
using namespace std;

inline int minimum(const int *ptr, const int lb, const int ub)
{
    int temp = ptr[lb];
    for (int i = lb; i <= ub; i++)
    {
        if (ptr[i] < temp)
            temp = ptr[i];
    }
    return temp;
}
int main()
{
    int T, N, *cost = NULL, num, count = 1, min, pos;
    cin >> T;
    while (--T + 1)
    {
        cin >> N;
        cost = new int[N];
        for (int i = 0; i < N; i++)
            cin >> cost[i];
        min = cost[0];
        pos = 0;
        for (int i = 1; i < N; i++)
        {
            if (i - pos <= 5 && min > cost[i])
            {
                count++;
                min = cost[i];
                pos = i;
            }
            else if ((i - pos) > 5 && minimum(cost, i - 5, i) == cost[i])
            {
                count++;
                min = cost[i];
                pos = i;
            }
        }
        delete[] cost;
        cout << count << "\n";
        count = 1;
    }
    return 0;
}