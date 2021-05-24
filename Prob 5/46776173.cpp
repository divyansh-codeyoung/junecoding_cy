#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define T ll t;cin>>t;while(t--)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int D,d;
        ll a,b,c;
        cin>>D>>d>>a>>b>>c;
        int maxD = d*D;
        if(maxD<10){
            cout<<0<<endl;
        }
        else if(maxD>=10&&maxD<21){
            cout<<a<<endl;
        }
        else if(maxD>=21&&maxD<42){
            cout<<b<<endl;
        }
        else if(maxD>=42){
            cout<<c<<endl;
        }
  return 0;
}
  