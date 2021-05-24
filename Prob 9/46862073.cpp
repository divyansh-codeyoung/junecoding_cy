#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    int n;
    cin>>n;
    while(n)
    {
        int k=n%10;
        if(k==4)
        c++;
        n=n/10;
    }
    cout<<c<<endl;
 
}
