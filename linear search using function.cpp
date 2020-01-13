#include<bits/stdc++.h>
using namespace std;
void search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            cout<<"Key Found";
            return;
        }

    }
    cout<<"Not Found";
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int key;
    cin>>key;
    search(arr,n,key);
    return 0;
}
