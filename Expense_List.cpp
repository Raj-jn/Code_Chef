

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define p pow

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    ll ans = p(2,n);
	    ll power = p(2,x);
	    cout<<power/ans<<endl;
	}
	return 0;
}