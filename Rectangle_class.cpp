#include<bits/stdc++.h>
using namespace std;
class rectangle{
  public:
    int length;
    int breadth;
    int area(int l,int b)
    {
        length = l;
        breadth = b;
        int area = (length*breadth);
        return area;
    }
    int perimeter(int l,int b)
    {
        length=l;
        breadth = b;
        int perimeter = 2*(length+breadth);
        return perimeter;
    }
};
int main()
{
   int le,be;
   cin>>le>>be;
   rectangle obj;
   cout<<"Area is "<<obj.area(le,be)<<endl;
   cout<<"Perimeter is "<<obj.perimeter(le,be)<<endl;
   return 0;
}
