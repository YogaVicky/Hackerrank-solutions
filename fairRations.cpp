#include <iostream>
using namespace std;
int main(){
	int n , a[1000] , i , count = 0 , check = 0;
	cin>>n;
	for(i = 0; i<n; i++){
		cin>>a[i];
	}
	for(i = 0; i<n; i++){
		if(i==n-1){
			if(a[i]%2==1){
				check = 1;
				break;
			}
		}
		if(a[i]%2 == 1){
			a[i]++;
			a[i+1]++;
			count+=2;
		}
	}
	if(check == 1)
		cout<<"NO";
	else
		cout<<count;
	return 0;
}