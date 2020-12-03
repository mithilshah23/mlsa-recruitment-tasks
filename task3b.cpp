#include <bits/stdc++.h>
using namespace std;


int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    if(a==b)
    {
        return a;
    }
    if(a<b)
    {
        return gcd(b-a,a);
    }
    if(a>b)
    {
        return gcd(a-b,b);
    }
    return -1;
}
int main()
{
    int a,b;
    cin>>a>>b;
    while(gcd(a,b)!=1)
    {
        int d=gcd(a,b);
        a=a/d;
    }
   cout<<a;
  

return 0;
}