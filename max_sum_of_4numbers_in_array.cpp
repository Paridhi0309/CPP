#include <bits/stdc++.h>
using namespace std;
int maxProduct(int arr[], int n)
{
    if (n < 4)
        return -1;
    sort(arr, arr + n);
    int x=arr[0]*arr[1]*arr[2]*arr[3];
    int y=arr[0]*arr[1]*arr[n-2]*arr[n-1];
    int z=arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4];
    return max(x, max(y, z));
}
int main()
{
    int arr[] = { -10, -3, 5, 6, -20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = maxProduct(arr, n);
    if (max == -1)
        cout << "No Quadruple Exists";
    else
        cout << "Maximum product is " << max;

    return 0;
}
