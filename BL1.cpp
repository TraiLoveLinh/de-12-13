#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
bool a[1001];


void genPrime()
{
    // memset(a, true, sizeof(a));
    for(int i=2;i<=1000;i++)
    { a[i] = true;}
    a[2] = true;
    for(int i=2;i<=1000;i++)
    {
        if (a[i]==true)
        {
            for (int j=i*2; j<=1000; j+=i)
            {
                a[j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    genPrime();
    int n;
    cin>>n;
    cout<<"-Cac uoc la:";
    for (int i = 1; i <=n; i++)
        if(n%i==0) 
            cout<<i<<" ";
    cout<<endl;
    cout<<"-Cac uoc nguyen to: ";
    for (int i=2;i<=n;i++)
        if(n%i==0&&a[i]==true)
            cout<<i<<" ";
    return 0;
}