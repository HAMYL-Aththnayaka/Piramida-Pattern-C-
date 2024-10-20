#include <iostream>
using namespace std;
int main ()
{
    int w,x,y,z;
    cout<<"Enter a Value: ";
    cin>>w;
    for (x=1;x<=w;x++)
    {
      for(y=x;y<w;y++)
      cout<<" ";
      for (z=1;z<=x;z++)
      cout<<"* ";
      cout<<"\n";
    }
    return 0;
}
