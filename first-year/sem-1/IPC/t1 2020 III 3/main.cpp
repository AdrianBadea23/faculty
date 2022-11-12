#include <iostream>

using namespace std;
int i=3,x,y,v[100],j,a=1,b=1;
int main()
{
   cin>>x>>y;
    v[1]=1;
    v[2]=1;
    while(a<y){
        v[i]=3*a-b;
        b=a;
        a=v[i];
        i++;
    }

    for(j=i-1;j>=1;j--)
        cout<<v[j]<<" ";

    return 0;
}
