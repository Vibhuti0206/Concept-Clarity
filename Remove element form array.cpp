#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int i, j, k = 0;
    int n;
    cin >> n;
  int arr[n];
  int out[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (arr[i] == out[j])
                break;
        }
        if (j == k)
        {
            out[k] = arr[i];
            k++;
        }
    }
    
    for (i = 0; i < k; i++)
        cout << out[i] << " ";
    return 0;
}
