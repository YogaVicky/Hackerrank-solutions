#include<iostream>
#include<set>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n>>s;
    set<char>st;
    int max_length_final = 0;
    int max_length = 0;
    for(auto i = 0;s[i]!='\0';i++)
        st.insert(s[i]);
    for(auto it = st.begin();it!=st.end();){
        char a = *it;
        it++;
        auto it1 = it;
        for(;it1!=st.end();it1++){
            max_length = 0;
            char b = *it1;
            // cout<<a<<b<<" ";
            int check1 = 0 , check2 = 0;
            for(auto i = 0;s[i]!='\0';i++){
                if(s[i] == a){
                    if(!check1){
                        max_length++;
                        check1 = 1;
                        check2 = 0;
                    }
                    else{
                        max_length =0;
                        break;
                    }
                }
                else if(s[i] == b){
                    if(!check2){
                        max_length++;
                        check2 = 1;
                        check1 = 0;
                    }
                    else{
                        max_length =0;
                        break;
                    }    
                }
            }
        // cout<<max_length<<endl;
        if(max_length > max_length_final)
            max_length_final = max_length;
        }
    }
    cout<<max_length_final;
    return 0;
}