#include <iostream>
#include<string>
using namespace std;
// int main(){
// 	string a;
// 	char b , temp;
// 	int i , t , check = 0 , check1 ,check2 ,j;
// 	getline(cin,a);
// 	// checksymmetry(a);
// 	for(i=0;a[i]!='\0';i++){
//         for(j=i;a[j]!='\0';j++){
//         	if(a[i]>a[j]){
//         		temp = a[i];
//         		a[i] = a[j];
//         		a[j] = temp;
//         	}
//         }
//     }
//     // cout<<a<<endl;
// 	for(i=0;a[i]!='\0';i++){
// 		t = i;
// 		for(j=t+1;a[j]==a[t];j++)
// 			i++;
// 		// cout<<j-t<<endl;
// 		if((j-t)%2 != 0)check++;
// 		// cout<<check;
// 	}
// 	// cout<<check;
// 	if(check < 2)
// 		cout<<"YES";
// 	else
// 		cout<<"NO";
// 	return 0;
// }
int main() {
	string a;
	char b , temp;
	int i , t , check = 0 , check1 ,check2 ,j;
	getline(cin,a);
	int letter[26] = {0};    
    for (i = 0; i < strlen(a); i++) {
        letter[a[i] - 'a']++;
    }
    for (i = 0; i < 26; i++) {
        if (letter[i] % 2 == 1) {
            check++;
        }
    }
    if(check < 3)
		cout<<"YES";
	else
		cout<<"NO";
    return 0;
}
