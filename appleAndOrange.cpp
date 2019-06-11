#include <iostream>
using namespace std;
int main(){
	long long int s,t,a,b,m,n,app[100000],ora[100000],i,j,checka=0,checkb=0;
	cin>>s>>t;
	cin>a>>b;
	cin>>m>>n;
	for(i=0;i<m;i++){
		cin>>app[i];
		app[i] = app[i] + a;
		if(app[i]>=s && app[i]<=t)
			checka++;
	}
	for(i=0;i<n;i++){
		cin>>ora[i];
		ora[i] = ora[i] + b;
		if(ora[i]>=s && ora[i]<=t)
			checkb++;
	}
	cout<<checka<<endl<<checkb;
	return 0;
}