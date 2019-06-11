#include <iostream>
using namespace std;
int main(){
	int x1,v1,x2,v2,i=-1,j=1;
	cin>>x1>>v1>>x2>>v2;
	if(v1!=v2){
		i = (x2 - x1)/(v1 - v2);
		j = (x2 - x1)%(v1 - v2);
	}
	if(j==0 && i>=0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}