#include <iostream>
using namespace std;
int main(){
	int t , n[10] , a[10] , b[10] , i , j , min , max;
	cin>>t;
	for(i = 0; i<t; i++){
		cin>>n[i]>>a[i]>>b[i];
	}
	for(i = 0; i<t; i++){
		if(a[i]>b[i]){
			min = b[i];
			max = a[i];
		}
		else{
			min = a[i];
			max = b[i];
		}
		if(min!=max){
			for(j = 0; j<n[i]; j++){
				cout<<max*j + min*(n[i] - 1 - j)<<" ";
			}
		}
		else
			cout<<min*(n[i]-1);			
		cout<<endl;
	}
	return 0;
}