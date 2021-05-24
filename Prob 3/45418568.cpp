#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define T ll t;cin>>t;while(t--)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    T{
        ll x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        float a= x/(float)xr;
        float b= y/(float)yr;
        //cout<<a<<"  "<<b<<endl;
        float mini = min(a,b);
        //cout<<mini<<endl;
        if(mini>=d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
  return 0;
}