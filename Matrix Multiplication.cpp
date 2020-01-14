#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    if(c1 != r2)
      cout<<"Multiplication not possible";
    else
     {
          int arr1[r1][c1],arr2[r2][c2],arr3[c1][r2];
          for(int i=0;i<r1;i++)
          {
              for(int j=0;j<c1;j++)
              {
                  cin>>arr1[i][j];
              }
          }
          for(int i=0;i<r1;i++)
          {
              for(int j=0;j<c1;j++)
              {
                  cin>>arr2[i][j];
              }
          }
          
          for(int m=0;m<r1;m++)
          {
              for(int k=0;k<c2;k++)
              {
                 arr3[m][k] = 0;
                 for(int i=0;i<c2;i++)
                 {
                     arr3[m][k] += arr1[m][i]*arr2[i][k];
                 }
              }
          }
          for(int m=0;m<r1;m++)
          {
              for(int k=0;k<c2;k++)
              {
                  cout<<arr3[m][k]<<" ";
              }
              cout<<endl;
          }
     }
     return 0;
}
