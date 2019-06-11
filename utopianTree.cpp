#include <iostream>
using namespace std;
int main(){
    int n , a[60],h,j,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        h=0;
        for(j=0;j<=a[i];j++){
            if(j%2 == 0)
                h+=1;
            else
                h*=2;
        }
        cout<<h<<endl;
    }
    return 0;
}