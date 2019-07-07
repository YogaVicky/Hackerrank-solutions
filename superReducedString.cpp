#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	string a;
	char b[100];
	int i;
	getline(cin,a);
	int j=0;
	int check=1;
	while(check==1){
		check=0;
		j=0;
		for(i=0;a[i]!='\0';i++){
			if(a[i]!=a[i+1]){
				b[j]=a[i];
				j++;
			}
			else{
				i++;
				check=1;
			}
		}
		b[j]='\0';
		for(i=0;b[i]!='\0';i++){
			cout<<b[i];
		}
		cout<<endl;
		for(i=0;b[i]!='\0';i++){
			a[i]=b[i];
		}
		a[i]='\0';	
	}
	if(b[0]='\0')
		cout<<"Empty String";
	else
		for(i=0;b[i]!='\0';i++){
			cout<<b[i];
		}
	return 0;
}