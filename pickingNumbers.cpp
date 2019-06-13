#include <iostream>
using namespace std;
int main(){
    int n , a[100] , i , check1 , check2 , max=0 , j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        check1 = 0;
        check2 = 0;
        for(j=0;j<n;j++){
            if(a[i] - a[j] <= 1 && a[i] - a[j] >= 0)
                check1++;
        }
        for(j=0;j<n;j++){
            if(a[i] - a[j] >= -1 && a[i] - a[j] <= 0)
                check2++;
        }
        if(check1>max)
            max = check1;
        if(check2>max)
            max = check2;
    }
    cout<<max;
    return 0;
}
