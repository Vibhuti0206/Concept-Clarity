#include<bits/stdc++.h>
using namespace std;
int partition(int *arr,int start, int end)
{
	int pivot = arr[end];
	int pIndex = start;
	for(int i=start;i<end;i++)
	{
		if(arr[i]<=pivot)
		{
			swap(arr[i],arr[pIndex]);
			pIndex++;
		}
		
	}
	swap(arr[pIndex],arr[end]);
	return pIndex;
}
void quicksort(int *arr,int start,int end)
{
	if(start<end)
	{
	
	int partitionindex=partition(arr, start,end);
	quicksort(arr,start,partitionindex-1);
	quicksort(arr,partitionindex+1,end);
    }
}
int main()
{
	int arr[]={1,4,3,7,9,6};
	quicksort(arr,0,5);
	for(int i=0;i<6;i++)
	 cout<<arr[i]<<" ";
	return 0;
}
