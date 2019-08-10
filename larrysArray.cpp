#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int t , count[10] , i;
	cin>>t;
	for(i=0;i<t;i++){
		int a[1000] , j , n , check = 0  , temp , check2 = 0;
		cin>>n;

		for(j=0;j<n;j++){
			cin>>a[j];
		}
		while(check2 == 0){
			for(j=0;j<n-2;j++){
				if(a[j]>a[j+1]){
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = a[j+2];
					a[j+2] = temp;
					// for(j=0;j<n;j++){
					// 	cout<<a[j];
					// }
					// cout<<endl;
					break;
				}
				if(j==n-3){
					check2 = 1;
					break;
				}
			}
		}

		if(a[n-3]-a[n-1] == 1){
			temp = a[n-3];
			a[n-3] = a[n-1];
			a[n-1] = a[n-2];
			a[n-2] = temp;
		}

		// cout<<endl;
		// for(j=0;j<n;j++){
		// 	cout<<a[j];
		// }
		// cout<<endl;
		for(j=0;j<n-1;j++){
			if(a[j+1]-a[j]!=1){
				check = 1;
				break;
			}
		}

		count[i] = check;
	
	}
	for(i=0;i<t;i++){
		if(count[i] == 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}