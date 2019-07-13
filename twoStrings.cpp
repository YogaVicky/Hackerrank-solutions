#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    int  i , count[5] = {0} , j , n;
    cin>>n;
    cin.ignore();
    for(j=0;j<n;j++){
        string a , b;
        int check[26] = {0};
        getline(cin,a);
        for(i=0;a[i]!='\0';i++){
            check[a[i] - 'a']++;
        }
        for(i=0;i<26;i++){
            if(check[i]>0)
                count[j]++;
        }
    }
    for(j=0;j<n;j++){
        cout<<count[j]<<endl;
    }
    return 0;
}