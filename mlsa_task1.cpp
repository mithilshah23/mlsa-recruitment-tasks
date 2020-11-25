#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    int a,b;
    a=y/x;
    b=(z+y)/x;
    if(a==b){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
  

return 0;
}