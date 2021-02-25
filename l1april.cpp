#include<bits/stdc++.h>
#define ll long long
#define maex 998244353 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        ll diff=100-s;
        ll p[n],pl[n];
       ll min1=INT_MAX;
       ll min0=INT_MAX;
        for(ll i=0;i<n;i++)
          cin>>p[i];
        

         if(min1+min0<=diff)
           cout<<"yes"<<endl;
         else 
          cout<<"no"<<endl;
    }
}
