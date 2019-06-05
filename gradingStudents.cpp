#include<iostream>
using namespace std;
int main(){
	int n , a[60] , q , m , i;
	cin>>n;
	for (i = 0; i < n; i++){
        cin>>a[i];
    }
    for (i = 0; i < n; i++){
    	if(a[i]>37){
	    	q = a[i]/5;
	    	m = 5 *(q+1);
	    	if(m - a[i] < 3)
	    		a[i] = m;
    	}
    }
    for (i = 0; i < n; i++){
        cout<<a[i]<<endl;
    }
	return 0;
}