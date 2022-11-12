#include <iostream>

using namespace std;

int suma(int n)
{
    int i,s=0,j,ok=1;
    for(i=2;i<=n/2;i++)
    {

        if(n%i==0){
               ok=1;
         for(j=2;j<=i/2;j++)
            if(i%j==0) ok=0;
        if(ok==1) s=s+i;}

    }
    return s;
}
int main()
{
    cout<<suma(12);

    return 0;
}
