#include <iostream>
#include<string>
using namespace std;
int main(){
	int n , a[1000] , i , min , j , check = 0;
	cin>>n;
	for(i = 0;i < n;i++ ){
        cin>>a[i];
    }
    min = n;
    for(i = 0;i < n;i++ ){
    	for(j = i+1;j < n;j++ ){
    		if(a[i] == a[j]){
    			if(min > j-i){
    				min = j-i;
    				check++;
    			}
    		}
    	}
    }
    if(check==0)
    	cout<<-1;
    else
    	cout<<min;
	return 0;
}