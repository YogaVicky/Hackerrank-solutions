#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	long int n , i , a[1000000] , b[100] = {0} , j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	for(i=0;i<100;i++){
		for(j=0;j<b[i];j++)
			cout<<i<<" ";
	}
	return 0;
}