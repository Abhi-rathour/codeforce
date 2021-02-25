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
        
       if(n==0)
        cout<<x*(x-1)<<endl;
        if(n==1)
        { ll d=(x+1)/2+1;
           if(x%2==0)
             cout<<(d-1)*d+1<<endl;
             else
             {
                 cout<<(d-1)*d-1<<endl;
             }
              
    else 
    {
        if(x==1)
        cout<<n*n<<endl;
        else
        { 
           ll d=x/2;
           ll s=2+d;
           ll dis=s*s;
           if(x%2==0)
             cout<<dis-(s-n)<<endl;
            else
              cout<<dis+(s-n)<<endl;
              
        }
    }
    }
}