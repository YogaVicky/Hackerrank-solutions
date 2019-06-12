#include <iostream>
using namespace std;
int main(){
	int n , cl = 0 , l,i , s=5;
	cin>>n;
	for(i=0;i<n;i++){
        l = s/2;
        cl+=l;
        s = l*3;
        cout<<cl<<endl;
    }
    cout<<cl;
	return 0;
}