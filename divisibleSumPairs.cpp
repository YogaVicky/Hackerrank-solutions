#include <iostream>
using namespace std;
int main(){
	int n , k , i ,a[100] ,count = 0 , j;
	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i] + a[j]%k == 0)
				count++;
		}
	}
	cout<<count;
	return 0;
}