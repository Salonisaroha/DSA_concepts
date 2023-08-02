#include <iostream>
#include <limits.h>
using namespace std;
int getMax(int num[], int n)
{
    int max = num[0];

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    return max;
}
int getMin(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int num[] = {12, 34, 65, 9 ,4, 98};
    int n = sizeof(num) / sizeof(num[0]);

    cout << getMax(num, n) << endl;
    cout << getMin(num, n) << endl;
 
}