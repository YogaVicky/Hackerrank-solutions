#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int v , n , i , pos , a[1000];
	cin>>v>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i] == v)
			pos = i;
	}
	cout<<pos;
}