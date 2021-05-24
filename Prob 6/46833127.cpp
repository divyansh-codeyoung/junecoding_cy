#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define T ll t;cin>>t;while(t--)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    T{
        ll g,p, x[10];
        cin>>g>>p;
        for(int i=0;i<10;i++){
            cin>>x[i];
        }
        ll ageG = 0;
        for(int i=g;i<10;i++){
            ageG+=x[i];
        }
        
        auto days=[&](ll slots){
            return (slots/p + (slots%p!=0));
        };
        ll max = days(ageG+x[g-1]);
        ll min = days(ageG+1);
        
        cout<<min<<" "<<max<<endl;
    }
  return 0;
}