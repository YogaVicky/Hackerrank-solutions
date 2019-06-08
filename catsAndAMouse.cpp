#include <iostream>
using namespace std;
int main(){
    int q , i , a[100][3] , j;
    cin>>q;
    for(i=0;i<q;i++)
        for(j=0;j<3;j++)
            cin>>a[i][j];
    for(i=0;i<q;i++){
        if(abs(a[i][2] - a[i][0]) < abs(a[i][1] - a[i][2]) )
            cout<<"Cat A";
        else if(abs(a[i][2] - a[i][0]) > abs(a[i][1] - a[i][2]) )
            cout<<"Cat B";
        else
            cout<<"Mouse C";
        cout<<endl;
    }
    return 0;
}