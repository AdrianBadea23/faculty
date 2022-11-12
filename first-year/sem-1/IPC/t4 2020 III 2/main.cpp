#include <iostream>

using namespace std;
int n,m,i,j,a[100][100],v[100],nr;
int main()
{ cin>>n>>m;
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            cin>>a[i][j];

            for(j=1;j<=m;j++)
                v[j]=1;

        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++){
                if(a[i][1]==a[i][j]) v[j]=0;
            }

            for(i=1;i<=m;i++){
                if(v[i]!=0) nr++;
                cout<<v[i]<<" ";}

            cout<<nr;
    return 0;
}
