#include <iostream>
using namespace std;
int main(){
	long int n , i , check , c1 , c2;
	int t , a[10000] , b[10000][2] , j;
	cin>>n>>t;
	for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<t;i++){
    	for(j=0;j<2;j++){
        	cin>>b[i][j];
    	}
    }
    for(i=0;i<t;i++){
    	c1 = b[i][0];
    	c2 = b[i][1];
    	check = a[c1];
    	for(j=c1+1;j<=c2;j++){
    		if(check>a[j])
    			check = a[j];
    	}
    	cout<<check<<endl;
    }
    return 0;
}