#include <iostream>
using namespace std;
int main(){
	long long int n , count = 0 , v ,i;
	char a[1000000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i] == 'U')
			count++;
		else
			count--;
		if(i!=0){
		if(count == 0 && a[i-1] == 'U')
			v++;
	}
	}
	cout<<v;
	return 0;
}