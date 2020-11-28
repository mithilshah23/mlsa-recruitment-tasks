#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define for(i,n) for(int i=0; i<n; i++)
#define w(t) int t; cin>>t; while(t--)


int mithil(string m,set<char> s,int n)
{
    int p=0;
    int v=0;
    for(i,n)
    {
        if(s.find(m[i]) != s.end())
        {
            p+=1;
        }
        else
        {
            v+= ((p*(p+1))/2);
            p=0;
        }
    }
    if(p != 0)
    {
        v+= ((p*(p+1))/2);
    }
    return v;
}


int main()
{
  int n,k;
  cin>>n>>k;
  char a;
  string m;
  cin>>m;
  set<char> s;
  for(i,k)
  {
      cin>>a;
      s.insert(a);
      
  }
  int ans=mithil(m,s,n);
  cout<<ans;

  

return 0;
}