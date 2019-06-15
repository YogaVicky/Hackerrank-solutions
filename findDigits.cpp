#include <iostream>
using namespace std;
int main(){
	int n,i;
	long long int a[15] , b , c , check;
	cin>>n;
	for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        b = a[i];
        check = 0;
        while(b!=0){
        	c = b%10;
        	if(c!=0 && a[i]%c == 0)
        		check++;
        	b = b/10;
        }
        cout<<check<<endl;
    }
	return 0;
}