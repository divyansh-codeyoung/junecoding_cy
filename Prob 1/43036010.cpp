#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;


int main()
{
    ld h,m1,m,sum;
        cin>>h>>m;
        m1 = m*m;
        sum = ceil(h/m1);
        if(sum<=18)
            cout<<"1"<<endl;
        else if(sum>=19 && sum<=24)
            cout<<"2"<<endl;
        else if(sum>=25 && sum<=29)
            cout<<"3"<<endl;
        else
            cout<<"4"<<endl;
    return 0;
}

