#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    long int t , i;
    int j , l , check , f1 , f2 , k;
    string a[100000];
    char temp;
    cin>>t;
    cin.ignore();
    for(i=0;i<t;i++){
        getline(cin,a[i]);
    }
    for(i=0;i<t;i++){
        l = a[i].length();
        check = 0;
        f1=l-1;
        for(j=l-1;j>0;j--){
            if(a[i][j]>a[i][j-1]){
                f1 = j-1;
                check++;
                break;
            }
        }
        for(j=l-1;j>f1;j--){
            if(a[i][j]>a[i][f1]){
                temp = a[i][j];
                a[i][j] = a[i][f1];
                a[i][f1] = temp;
                break;
            }
        }
        for(j=f1+1;j<l-1;j++){
            for(k=j+1;k<l;k++){
                if(a[i][j]>a[i][k]){
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }    
            }
        }
        // cout<<check<<endl;
        if(check==1){
            cout<<a[i]<<endl;
        }
        else
            cout<<"no answer"<<endl;
    }
    return 0;
}