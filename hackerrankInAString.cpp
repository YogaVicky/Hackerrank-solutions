#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	string a;
	int res[100]={0} , q , i , j;
	char c[10]={'h','a','c','k','e','r','r','a','n','k'};
	cin>>q;
	// hereiamstackerrank
	cin.ignore();
	for(i=0;i<q;i++){
		getline(cin,a);
		int k=0 , check = 0 , check1 = 0;
		for(j=0;a[j]!='\0';j++){
			if(c[k] == a[j]){
				if(j>=check){
					k++;
					check = j;
					if(k==10)
						break;
				}
				else{
					check1=1;
					break;
				}

			}
		}
		if(k!=10){
			check1=1;
		}
		res[i]=check1;
	}
	for(i=0;i<q;i++){
		if(res[i]==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}