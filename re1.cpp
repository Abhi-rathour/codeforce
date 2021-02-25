#include<bits/stdc++.h>
#define ll long long 
using namespace std;
bool srt(pair<ll,ll> p1,pair<ll,ll> p2)
{
   if(p1.first<p2.first||p1.first>p2.first)
      return (p1.first<p2.first);
   else if(p1.first==p2.first)
  return (p1.second<p2.second);
      
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,idx,idx2;
        cin>>n;
        ll a[n];bool type=false;
        vector< pair <ll,ll> > v;
        set<ll> st;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        
            v.push_back(make_pair(a[i],i));
            if(a[i]<a[i-1])
             type=true;
          
        }
        if(type==false)
         cout<<"1"<<endl;

         else
         {  ll temp;
             sort(v.begin(),v.end(),srt);
             ll m=1;
             ll idx=v[0].second;
             ll idx1;
             ll j=1;
             while(v[j].first==v[0].first)
               j++;
             for(ll i=j;i<n;i++)
             {
               ll dt=v[i].second;
                if(idx<dt)
                continue;
                else
                { ll cc=0;
                    while(v[i+1].first==v[i].first&&i<n-1)
                    {
                        if(idx<dt)
                        {
                            idx=dt;
                            cc=1;
                            break;
                        }
                       i++;
                    }
                   if(cc==1)
                   continue;
                   else
                    {  if(idx<v[i+1].second&&i+1<n)
                        continue;
                        else{
                        m++;
                        idx=dt;}
                    }
                   
                    
                }
                 
                   

               }
               cout<<m<<endl;
             }  
              
                
         }    
                

             }
                
