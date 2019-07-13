#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    long long int n , i , a[200000] , res = 20000000, j , b[100000]  = {0}, k = 0 , t;
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
    for(i=0;i<n-1;i++){
        int check = abs(a[i] - a[i+1]);
        // cout<<check<<" ";
        if(res > check){
            res = check;
            k = 0;
        }
        if(res == check){
            cout<<"res"<<res<<endl;
            cout<<a[i]<<" "<<a[i+1]<<endl;
            b[k] = a[i];
            k++;
            b[k] = a[i+1];
            k++;
        }
    }
    // cout<<endl<<k<<endl;
    for(i=0;i<k;i++){
        cout<<b[i]<<" ";
    }
}