#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    int n , i , t , k , a[1000] , j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        t = a[i];
        for(j=i-1;j>=0;j--){
            if(t<a[j]){
                a[j+1]=a[j];
            }
            else
                break;
        }
        a[j+1] = t;
    }
    for(k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
    return 0;
}