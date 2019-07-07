#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int i , res[100] = {0};
	int n;
	cin>>n;
	for(i=0;i<n;i++){
		if(i%2==0)
			res[i]++;
	}
	for(i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
	return 0;
}