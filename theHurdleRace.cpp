#include <iostream>
using namespace std;
int main(){
	int n , k ,a[100] , i;
	cin>>n>>k;
	int max = 0;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i] > max)
			max = a[i];
	}
	if(max > k)
		cout<<max-k;
	else
		cout<<0;
	return 0;
}