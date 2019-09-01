#include<iostream>
using namespace std;
int main(){
	int a[100000] , d , n , i;
	cin>>n>>d;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=d%n;i<n;i++)
		cout<<a[i]<<" ";
	for(i=0;i<d%n;i++)
		cout<<a[i]<<" ";
	return 0;
}