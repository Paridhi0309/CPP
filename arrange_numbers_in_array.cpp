void arrange(int arr[],int n){
    if(n%2==0)
    {
        int k=0;
        for(int i=0;i<n/2;i++)
        {
            arr[k]=2*i+1;
            k++;
        }
        for(int i=n;i>0;i=i-2)
        {
            arr[k]=i;
            k++;
        }
    }
    else{
        int k=0;
        for(int i=0;i<(n+1)/2;i++)
        {
            arr[k]=2*i+1;
            k++;
        }
        for(int i=n-1;i>0;i=i-2)
        {
            arr[k]=i;
            k++;
        }
    }
}
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}


}
