#include <iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    string a[100] ;
    int q , i , j, count[100] = {0};
    cin>>q;
    cin.ignore();
    for (i = 0;i<q; i++){
        getline(cin,a[i]);
    }
    int l;
    for (i = 0;i<q; i++){
        int check1[26]={0},check2[26]={0},count=0;
        l = a[i].length();
        if(l%2!=0){
            cout<<-1<<endl;
            continue;
        }
        for (j = 0;j < l/2; j++){
            check1[a[i][j]-'a']++;
        }
        for (j = l/2;j < l; j++){
            check2[a[i][j]-'a']++;
        }
        for (j = 0;j < 26; j++){
        	// cout<<check1[j]<<" "<<check2[j]<<endl;
            count+=abs(check1[j] - check2[j]);
        }
        cout<<count/2<<endl;
    }    
    return 0;
}