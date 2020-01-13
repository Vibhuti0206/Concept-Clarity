#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int largest = arr[0];
    int ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > largest)
           {
               largest = arr[i];
               ans=i;
           }
    }
    cout<<"Index of largest element is "<<ans<<" from 0 indexing";
    return 0;
}
