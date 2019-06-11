#include <iostream>
#include<string.h>
using namespace std;
int main(){
    int a[26] , i ,j ,k;
    char b[26] , f = 'a' ;
    string t;
    for (i = 0; i < 26; i++){
        cin>>a[i];
    }
    for (i = 0; i < 26; i++){
        b[i] = f + 0;
    }
    getline(cin,t);
    int max = 0;
    for (i = 0; t[i]!='\0'; i++){
        for (j = 0; j < 26; j++){
            if(b[j] == t[i]){
                if(max<a[j])
                    max = a[j];        
            }    
        }
    }
    cout<<max*i;
    return 0;
}