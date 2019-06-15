#include <iostream>
using namespace std;
int main(){
	int n , a[100] , i , check = 0;
	cin>>n;
	for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;){
        if(a[i+2] == 0){
        	i+=2;
        	check++;
        }
        else{
        	i++;
        	check++;
        }
    }
    cout<<check; 
	return 0;
}