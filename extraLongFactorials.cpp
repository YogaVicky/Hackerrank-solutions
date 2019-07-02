#include <iostream>
using namespace std;
int main(){
	int n , i , res[500] , j , p , cary , l = 1;
	cin>>n;
	res[0] = 1;
	for( i = 2;i <= n ; i++){
		cary = 0;
		for( j = 0;j < l ; j++){
			p = res[j] * i + cary;
			res[j] = p%10;
			cary = p/10;
		}
		while(cary){
			res[l] = cary%10;
			cary =  cary/10;
			l++;
		}
	}
	for(i = l-1; i>= 0; i--)cout << res[i];
	return 0;
}

// int main(){

//     int n,val[500],sz;
//     cin >> n;
//     val[0] = 1;
//     sz = 1;
//     for(int i = 2; i <= n; i++){

//         int cary = 0;
//         for(int j = 0; j < sz; j++){
//             int pod = val[j]*i+cary;
//             val[j] = pod%10;
//             cary = pod/10;
//         }
//         while(cary){
//             val[sz] = cary%10;
//             cary/=10;
//             sz++;
//         }
//     }
//     for(int i = sz-1; i>= 0; i--)cout << val[i];
//     cout << endl;
//     return 0;
// }