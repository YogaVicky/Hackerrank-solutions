#include <iostream>
using namespace std;
int main(){
	int n , m1 = 0, m2 = 0, i;
	long long int a[1000] , min , max;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(i==0){
			min = a[i];
			max = a[i];
		}
		if(min>a[i]){
			min = a[i];
			m1++;
		}
		if(max<a[i]){
			max = a[i];
			m2++;
		}
	}
	cout<<m2<<" "<<m1;
	return 0;
}