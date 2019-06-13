#include <iostream>
using namespace std;
int main(){
	int n , check ,  a[100] , i , max = 0 , j , t1 , t2 , t3;
	cin>>n;
	for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++)
    		if(a[j] == i)
    			t1 = j;
		for(j=0;j<n;j++)
			if(t1 == a[j])
				t2 = j;
    cout<<t2<<endl;
    }
	return 0;
}