#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,r;
	    cin>>a>>r;
	    if(a>r)
	    cout<<"LOSS"<<endl;
	    else if(a<r)
	    cout<<"PROFIT"<<endl;
	    else
	    cout<<"NEUTRAL"<<endl;
	}
	return 0;
}