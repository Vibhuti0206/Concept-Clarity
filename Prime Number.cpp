#include<bits/stdc++.h>
using namespace std;
void prime(int a,int *p)
{
   p[0]=p[1]=0;  
   p[2]=1;
   for(int i=3;i<=a;i+=2)
     p[i] = 1;
   for(int i=3;i<=a;i+=2)
   {
       if(p[i])
       {
           for(int j=i*i ; j<=a;j+=2*i)
              p[j] = 0;
       }
   }
   return;
}
int main()
{
   long int n=1000000;
   int p[n]={0};
   int a;
   cin>>a;
   prime(a,p);
   if(p[a])
   {
       cout<<"Prime";
   }
   else
     cout<<"Not prime";

   return 0;
}
