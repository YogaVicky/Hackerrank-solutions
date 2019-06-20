#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	long int n , b[10] , w[10] , bc[10] , wc[10] , z[10] , i , r[10];
	cin>>n;
	for(i = 0;i < n;i++ ){
		cin>>b[i]>>w[i];
		cin>>bc[i]>>wc[i]>>z[i];
	} 
	for(i = 0;i < n;i++ ){
		if(abs(bc[i] - wc[i]) > z[i]){
			if(bc[i] > wc[i]){
				cout<<(b[i] + w[i])*wc[i] + b[i]*z[i]<<endl;
			}
			else{
				cout<<(b[i] + w[i])*bc[i] + w[i]*z[i]<<endl;	
			}
		}
		else{
			cout<<b[i]*bc[i] + w[i]*wc[i]<<endl;
		}
	}
	// for(i = 0;i < n;i++ ){
	// 	cout<<r[i]<<endl;
	// }
	return 0;
}