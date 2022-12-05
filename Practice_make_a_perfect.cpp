#include <iostream>
using namespace std;

int main() {

int p[4];
int i;
for(i=0;i<4;i++)
{
   cin>>p[i]; 
}

int j=0;
for(i=0;i<4;i++){
    if(p[i]>=10){
        
        j++;
    }
}


cout<<j;
	return 0;
}
