#include <iostream>
#include<string>
using namespace std;
int main(){
    int a[26] , i , max = 0 , j ,k;
    string t;
    for (i = 0; i < 26; i++){
        cin>>a[i];
    }
    cin.ignore();
    getline(cin,t);
    for (i = 0; t[i] != '\0'; i++){
        if(a[t[i] - 'a'] > max)
            max =  a[t[i] - 'a'];
    }
    cout<<max*i;
    return 0;
}
