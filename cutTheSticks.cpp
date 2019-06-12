#include <iostream>
using namespace std;
int main(){
    int a[1000] , n , i , check , min;
    cin>>n;
    check = n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<n<<endl;
    while(check!=0){
        min = 1000;
        for(i=0;i<n;i++){
            if(min>a[i] && a[i]>0)
                min = a[i];
        }
        for(i=0;i<n;i++){
            a[i] = a[i] - min;
            if(a[i] == 0)
                check--;
        }
        if(check!=0)
            cout<<check<<endl;    
    }
    return 0;
}