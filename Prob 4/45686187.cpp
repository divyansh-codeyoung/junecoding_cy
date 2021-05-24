#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int T,s,count=0;
	    cin>>T>>s;
	    while(T>=s){
	        count++;
	        T-=s;
	    }
	    cout<<count;
	   
	}
}
