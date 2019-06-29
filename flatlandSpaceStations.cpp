#include <iostream>
#include<math.h>
using namespace std;
int main(){
	long  int n , i , m ,max = 0,j;
	int a[100000] , temp;
	cin>>n>>m;
	for(i=0;i<m;i++){
		cin>>a[i];
	}
	for(i=0;i<m;i++){
		for(j=i;j<m;j++)
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	} 
	// for(i=0;i<m;i++)
		// cout<<a[i]<<endl;
	for(i=1;i<m;i++){
		if(max < a[i] - a[i-1]){
			max = a[i]-a[i-1];
			// cout<<a[i]<<" "<<a[i-1]<<" "<<max<<endl;
		}
	} 
	// cout<<"max "<<max<<endl;
	if(max/2<a[0]){
		max = a[0]*2;
		// cout<<max;
	}
	if(max/2<n - a[m-1] -1){
		max = (n - a[m-1] -1)*2;
		// cout<<max;
	}
	cout<<max/2;
	return 0;
}