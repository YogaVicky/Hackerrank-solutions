#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	long long int a[1000001] , i , n , t;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}


	for(i=1;i<n;i++){
		t = a[i];
		for(j=i-1;j>=0;j--){
			if(t<a[j]){
				a[j+1]=a[j];
			}
			else
				break;
		}
		a[j+1] = t;
	}



	int k = n/2;
	cout<<a[k];
	return 0;
}