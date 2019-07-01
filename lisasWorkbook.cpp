#include <iostream>
using namespace std;
int main(){
	int n , k , i , a[100] , pg = 1 , count = 0 , j;
	cin>>n>>k;
	for(i =0 ;i<n;i++){
		cin>>a[i];
	}
	for(i =0 ;i<n;i++){
		for(j = 1 ;j<=a[i];j++){
			if(j == pg){
				count++;
				// cout<<pg<<endl;
			}
			if(j%k==0 && j!=a[i]){
				// cout<<pg<<endl;
				pg++;
			}
			// cout<<j<<" ";
		}
		pg++;
	}
	cout<<count;
	return 0;
}