#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	long long int t , i , c1 = 2;
	cin>>t;
	while(3*(c1-1) < t)
		c1 = c1*2;
	cout<<3*(c1-1) - t +1;
	return 0;
}