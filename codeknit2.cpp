#include<bits/stdc++.h>
#define ll long long 
#define f(i,a,b) for(i=a;i<b;i++)
using namespace std;
int main()
{
    ll t,j;
    cin>>t;
    while(t--)
    {
       string s,t;
       cin>>t;
       ll l=t.length();
       ll mm=0;
       for(ll i=0;i<l-1;i++)
       {
           if(t[i]!=t[i+1])
             {mm=1;
              break;}
       }
     if(mm==0)
      {
          cout<<t<<endl;

      }
      else if(mm==1)
      {
          for(ll i=0;i<l;i++)
           {cout<<"0";
             cout<<"1";}
           cout<<endl;
      }
        
    }
    
}