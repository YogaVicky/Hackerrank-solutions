#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[100]={0} , n;
	cin>>n;
	for(auto i = 0;i < n;i++){
		int b;
		cin>>b;
		a[b]++;
	}
	for(auto i = 0;i < 100;i++)
		if(a[i] == 1)
			cout<<i<<endl;
	return 0;
}