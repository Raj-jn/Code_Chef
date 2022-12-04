#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z; 
	    cin>>w>>x>>y>>z;
	    int ans = x-y ;
	    int res=w+ans*z;
	    cout<<res<<endl;
	}
	return 0;
}