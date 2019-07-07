#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    int t ,i;
    long int n[10] , k  , a[10][100000] , check[10] ={1}, j;  
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n[i]>>k;
        if(k==0){
            for(j=1;j<=n[i];j++){
                a[i][j-1] = j;    
            }
        }
        else if((n[i]%(2*k))==0){
            for(j=1;j<=n[i];j++){
                a[i][j-1] = j+k;
                    if(j%k==0)
                        k=k*-1;
            }
        }
        else{
            check[i]=-1;
        }
    }
    for(i=0;i<t;i++){
        // cout<<check[i]<<endl;
        if(check[i]==-1){
            cout<<-1;
        }
        else{
            for(j=0;j<n[i];j++){
                cout<<a[i][j]<<" ";
            }    
        }
        cout<<endl;
    }
    return 0;
}