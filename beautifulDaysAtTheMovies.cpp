#include <iostream>
using namespace std;
int rev(k1){
	int r;
	while(k1!=0){
		r = r*10;
		r += k1%10;
		k1 = k1/10;
	}
	return r;
}
int main(){
	long long int i , j , k , k1 , check = 0;
	cin>>i>>j>>k;
	for(k1=i;k1<=j;k1++){
		if((k1-rev(k1))%k == 0)
			check++;
	}
	cout<<check;
	return 0;
}