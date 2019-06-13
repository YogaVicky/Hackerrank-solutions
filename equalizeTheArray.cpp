#include <iostream>
using namespace std;
int main(){
	int n , check ,  a[100] , i , max = 0 , j;
	cin>>n;
	for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
    	check = 0;
        for(j=i+1;j<n;j++)
        	if(a[i] == a[j])
        		check++;
    	if(max<check)
    		max = check;
    }
    cout<<n-max;
	return 0;
}