#include <bits/stdc++.h>
using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
    {
        res ^= arr[i]; // Selects the odd number occuring element in the array.
    }
    return res;
}

int main()
{
    int arr[] = {12, 12, 14, 90, 14, 14, 14, 90, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Odd Occuring element in the given array is " << findOdd(arr, n);
    return 0;
}