#include<iostream>
using namespace std;
int main()
{
    int i,n,j,fact=1;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        fact=1;
        cin>>a[i];
        for(j=1;j<=a[i];j++)
        {
          fact*=j;
        }
        cout<<fact<<endl;
    }

return 0;
}
