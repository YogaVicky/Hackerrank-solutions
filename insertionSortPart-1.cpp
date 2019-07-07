#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int n , i , t , k , a[1000] , j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	t = a[i-1];
	for(j=n-2;j>=0;j--){
		if(t<a[j]){
			a[j+1]=a[j];
			for(k=0;k<n;k++){
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
		else
			break;
	}
	a[j+1] = t;
	for(k=0;k<n;k++){
		cout<<a[k]<<" ";
	}
	cout<<endl;		
	return 0;
}