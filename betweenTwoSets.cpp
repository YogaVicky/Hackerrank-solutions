#include <iostream>
using namespace std;
int main(){
	int a[10] , b[10] , n , m ,i , j ,min;
	cin>>n>>m;
	for( i =0;i<n;i++ ){
		cin>>a[i];
	}
	for( i =0;i<m;i++ ){
		cin>>b[i];
	}
	min = b[0];
	for( i =0;i<m;i++ ){
		if(min>b[i])
			min = b[i];
	}
	
	int c[100] , k=0 , check1;
	for(i =1;i<=min;i++){
		check1 = 0;
		for(j=0;j<m;j++){
			if(b[j]%i != 0){
				check1++;
			}
		}
		if(check1 == 0){
			c[k] = i;
			k++;
			// cout<<"Hello";
		}
	}
	//2 4 8 16
	int check , count =0;
	for(i=0;i<k;i++){
		check = 0;
		for(j=0;j<n;j++){
			if(c[i]%a[j] != 0){
				check++;
			}
		}
		if(check == 0)
				count++;
	}
	cout<<count;
	return 0;
}