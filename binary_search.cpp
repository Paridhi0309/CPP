#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int val){
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]>val)
        {
             end=mid-1;
        }
        else if(arr[mid]<val)
        {
            start=mid+1;
        }
        else
        {
            return mid;
        }
    }
 return -1;
}
int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}

	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << BinarySearch(input, size, val) << endl;
	}

	delete [] input;
	return 0;
}
