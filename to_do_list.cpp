#include <iostream>
using namespace std;

int main() {
int t;
    cin>>t;
    while(t--){
       int n;
    cin >> n;
    int dif[n];
    for (int i = 0; i < n; i++)
    {
        cin >> dif[i];
    }
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(dif[i]>=1000){
          j++;
        }
    }
    cout<<j<<endl;
    }
	return 0;
}