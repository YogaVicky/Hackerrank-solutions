#include <iostream>
using namespace std;
int angry(){
	int n , k , i , a[1000] , check=0;
	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<=0)
			check++;
	}
	if(check>=k)
		return 1;
	else
		return 0;
}
int main(){
	int t , i , a[100];
	cin>>t;
	for(i=0;i<t;i++){
		a[i] = angry();
	}
	for(i=0;i<t;i++){
		if(a[i] == 1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;		
	}
	return 0;
}