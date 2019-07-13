#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int n , a[1000] , i , b1[1000] , b2[1000] , b3[1000] , i1 = 0, i2 = 0, i3 = 0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]==a[0]){
			b1[i1] = a[i];
			i1++;
		}
		else if(a[i]<a[0]){
			b2[i2] = a[i];
			i2++;
		}
		else if(a[i]>a[0]){
			b3[i3] = a[i];
			i3++;
		}
	}
	for(i=0;i<i2;i++){
		cout<<b2[i]<<" ";
	}
	for(i=0;i<i1;i++){
		cout<<b1[i]<<" ";
	}
	for(i=0;i<i3;i++){
		cout<<b3[i]<<" ";
	}
	return 0;
}