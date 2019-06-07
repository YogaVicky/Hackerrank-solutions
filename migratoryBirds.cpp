#include <iostream>
using namespace std;
int main(){
    long long int n , i, b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0,max;
    int a[1000000]; 
    cin>>n;
    for(i=0;i<n;i++){
    	cin>>a[i];
    }
    for(i=0;i<n;i++){
    	if(a[i] == 1)b1++;
    	else if(a[i] == 2)b2++;
    	else if(a[i] == 3)b3++;
    	else if(a[i] == 4)b4++;
    	else b5++;
    }

    int count = 1;
    max = b1;
    if(max < b2){max = b2;count = 2;}
    if(max < b3){max = b3;count = 3;}
    if(max < b4){max = b4;count = 4;}
    if(max < b5){max = b5;count =5 ;}
    cout<<count;
    return 0;
}
