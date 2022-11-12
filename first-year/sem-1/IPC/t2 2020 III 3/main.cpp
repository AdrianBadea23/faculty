#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int x,v[20],i,j,z,aux;
int main()
{
    while(f>>x)
{   i++;
    if(x%100==20) v[i]=x;

}
    for(j=1;j<=i-1;j++)
        for(z=j+1;z<=i;z++)
            if(v[j]>v[z]){aux=v[j];
            v[j]=v[z];
            v[z]=aux;}
      for(j=i-2;j<=i;j++)
            cout<<v[j]<<" ";
    return 0;
}
