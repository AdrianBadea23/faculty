#include <iostream>

using namespace std;
void generatoare(int n)
{
    int i=0,j=0,ok=1;
    for(i=2;i<=n/2;i=i+2)
        for(j=1;j<=n/2;j++)
            if(i*j+i/j==n){
                cout<<i<<"-"<<j<<" ";
                ok=0;
            }

            if(ok==1) cout<<"Nu exista.";

}
int main()
{  generatoare(2020);

    return 0;
}
