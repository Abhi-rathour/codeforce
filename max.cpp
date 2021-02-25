#include<bits/stdc++.h>
#define ll long long
#define maex 998244353 
using namespace std;
ll fact(ll n); 
  
ll ncr(ll n, ll r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
 
ll fact(ll n) 
{ 
    ll res = 1; 
    for (ll i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll min=INT_MAX;
        ll sum=1;
        ll count1=0;
        map<ll,ll>mp;
        map<ll,ll>mp1;
        set<ll>st;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            st.insert(a[i]);
            mp[a[i]]++;
            
            if(a[i]==1)
            { sum+=2;count1++;}
            else sum+=1;

        }
        ll ans=1;
       sort(a,a+n);
       ll total=count1;
    if(count1==0)
      { for(ll i=1;i<=n;i++)
          ans=ans<<1;
        cout<<ans<<endl;
      }
      else

     {  
         for(j=2;j<=n;j++)
         {  
            while(st.find(j)!=st.end())
            {  
             ll d=ncr(n,j);
              if(j<=count1)
             {  ll t=ncr(count1,j);
               sum+=(t*2);
               d=d-t;
            }
              sum+=(map[j]*j+1);
                d=d-map[j];
                sum=sum+d;
                j++;
              
            }
            j=k;
           ll d=ncr(n,j);
            
            
           

          
           
           







         }

         
         
         
         
         
     }
         
         



            
            
            
            
            
            
            
            
              }
            


          }

          
      }
      
         

    }
}
