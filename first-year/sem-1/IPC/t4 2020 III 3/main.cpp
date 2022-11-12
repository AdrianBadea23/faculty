#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int y,x,v[1000000],i;
int main()
{    f>>y;
     v[y]++;
    while(f>>x)
    {
        v[x]++;
    }

      for(i=y;i>=x;i--)
        if(v[i]==2) cout<<i<<" ";
    return 0;
}
