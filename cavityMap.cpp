#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    string a[100];
    int n , i , j;
    cin>>n;
    cin.ignore();
    for(i=0;i<n;i++){
        getline(cin,a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;a[i][j]!='\0';j++){
            if(i!=0 && i!=n-1 && j!=0 && j!=n-1){
                if( int(a[i][j-1])<int(a[i][j]) && 
                	int(a[i][j+1])<int(a[i][j]) && 
                	int(a[i+1][j])<int(a[i][j]) &&  
                	int(a[i-1][j])<int(a[i][j]))
                    cout<<"X";
                else
                    cout<<a[i][j];
            }
            else
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}    