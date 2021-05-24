#include <iostream>
using namespace std;

int main() {
	int T,s,count=0;
	cin>>T>>s;
	while(T>=s){
		count++;
		T-=s;
	}
	cout<<count;
	return 0;
}
