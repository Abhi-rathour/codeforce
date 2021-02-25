#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        
        ll a[n];
        for(ll i=0;i<n;i++)
         cin>>a[i];
        sort(a,a+n);
        ll j=1;
        ll  sum=0;
        ll count=0;
        for(ll i=n-1;i>=0;i--)
         {
            sum+=a[i];
            if(sum>=(j*x))
              {count++;
                j++;}
            else break;
         }
            cout<<count<<endl;
         }
    }