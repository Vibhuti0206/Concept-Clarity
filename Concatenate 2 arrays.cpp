#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
      cin>>arr1[i];
    for(int j=0;j<n2;j++)
      cin>>arr2[j];
    int k=n1+n2;
    int arr3[k];
    for(int i=0;i<n1;i++)
    {
        arr3[i] = arr1[i];
    }
    int m=0;
    for(int j=n1;j<k;j++)
    {
        
        arr3[j] = arr2[m];
        m++;
    }
    for(int i=0;i<k;i++)
     cout<<arr3[i]<<" ";
    return 0;
}
