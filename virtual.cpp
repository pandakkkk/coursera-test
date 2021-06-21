#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
#define ll long long
/*bool func(ll mid,string x,ll m)
{
   if(tem)
}*/

void solve()
{
    ll m;
    string x;
    cin>>x>>m;
    ll maxi=0;
    ll n=x.size();
    ll i=0;
    if(n==1)
    {
       if(x[0]-'0'<=m)
       {
           cout<<"1";
       }
       else cout<<"0";
       return ;
    }
    while(i<n)
    {
       ll y=x[i]-'0';
       maxi=max(y,maxi);
       i++;
    }

    //cout<<maxi<<"\n";
    ll start=maxi+1;
    ll end=1e18;
    ll mid;
    ll ans=50;
    while(start<=end)
    {
     // cout<<"pp";
      mid=(start+end)/2;

   __int128_t tmp=0;
   for(ll i=0;i<x.size();i++)
   {
       tmp=tmp*mid;
       tmp=tmp+(x[i]-'0');
       if(m<tmp)
       {
         tmp=m+1;
         break;
       }
   }
      if(tmp<=m)
      {
          ans=mid;
          start=mid+1;
      }
      else
      {
        end=mid-1;
      }

  }
    //cout<<start<<" "<<end<<"\n";
    cout<<ans-(maxi+1)+1;

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long  t;
  //cin>>t;
  t=1;
  while(t--)
  {
    solve();
  }
  return 0;

}
