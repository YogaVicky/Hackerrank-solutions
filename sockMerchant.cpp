#include <iostream>
using namespace std;
int main(){
    int n ,max, a[100] , i ,j ,b[100] , temp;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    int count = 0 , check , check2;
    for (int i = 0; i < n; i++){
        check = 0;
        check2 =0;
        for (int j = 0; j < i; j++){
            if(a[i] == a[j])
                check2 = 1;
        }
        if(check2 == 0){
        for (int j = i+1; j < n; j++){
            if(a[i] == a[j])
                check++;
        }
    }
        count+=(check+1)/2 ;
    }
    cout<<count;
    return 0;
}