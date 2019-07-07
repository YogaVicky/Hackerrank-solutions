#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int t ,i;
	long int n[10] , k  , a[10][100000] , check[10] ={1}, j;  
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n[i]>>k;
		for(j=1;j<=n[i];j++){
			if(j+k<=n[i]){
				a[i][j-1]=j+k;
				// cout<<j-1<<" "<<a[i][j-1]<<endl;
			}
			else if(j-k>0){
				a[i][j-1]=j-k;
				// cout<<j-1<<" "<<a[i][j-1]<<endl;
			}
			else
				check[i]=-1;
				break;
		}
	}
	for(i=0;i<t;i++){
		if(check[i]==-1){
			cout<<-1;
		}
		else{
			for(j=0;j<n[i];j++){
				cout<<a[i][j]<<" ";
			}	
		}
		cout<<endl;
	}
	return 0;
}