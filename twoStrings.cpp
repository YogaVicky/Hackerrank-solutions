#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    int  i , count[10] = {0} , j , n;
    cin>>n;
    cin.ignore();
    for(j=0;j<n;j++){
        string a , b;
        int check1[26] = {0} , check2[26] = {0};
        getline(cin,a);
        getline(cin,b);
        for(i=0;a[i]!='\0';i++){
            check1[a[i] - 'a']++;
        }
        for(i=0;b[i]!='\0';i++){
            check2[b[i] - 'a']++;
        }
        for(i=0;i<26;i++){
            if(check1[i]>0 && check2[i]>0)
                count[j]++;
        }
    }
    for(j=0;j<n;j++){
        if(count[j]>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}