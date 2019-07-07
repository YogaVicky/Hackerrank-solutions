#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int h , w , a[100][100] , i , j , res=0;
	cin>>h>>w;
	for(i=0;i<h;i++){
		for(j=0;j<w;j++)
			cin>>a[i][j];
	}
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			if(j==0 && j==w-1)
				res+=a[i][j]*2;
			else if(j==0){
				res+=a[i][j];
				if(a[i][j]-a[i][j+1]>0)
					res+=a[i][j]-a[i][j+1];	
			}
			else if(j==w-1){
				res+=a[i][j];
				if(a[i][j]-a[i][j-1]>0)
					res+=a[i][j]-a[i][j-1];
			}
			else{
				if(a[i][j]-a[i][j-1]>0)
					res+=a[i][j]-a[i][j-1];
				if(a[i][j]-a[i][j+1]>0)
					res+=a[i][j]-a[i][j+1];	
			}
			// cout<<res<<endl;
			if(i==0 && i==h-1)
				res+=a[i][j]*2;
			else if(i==0){
				res+=a[i][j];
				if(a[i][j]-a[i+1][j]>0)
					res+=a[i][j]-a[i+1][j];	
			}
			else if(i==h-1){
				res+=a[i][j];
				if(a[i][j]-a[i-1][j]>0)
					res+=a[i][j]-a[i-1][j];
			}
			else{
				if(a[i][j]-a[i-1][j]>0)
					res+=a[i][j]-a[i-1][j];
				if(a[i][j]-a[i+1][j]>0)
					res+=a[i][j]-a[i+1][j];	
			}
			// cout<<res<<endl;
		}
	}
	cout<<res+h*w*2;
	return 0;
}