#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int i , j , k , l , n , m , x , y ,sum = 0 , x1 , y1;
	cin>>n;
	cin>>m;
	cin>>y;
	cin>>x;
	int tn = n;
	int bn = 1;
	int ln = 1;
	int rn = n;
	int top = tn - y;
	int bot = y - bn;
	int lft = x - ln;
	int rgt = rn - x;
	// cout<<top<<" "<<bot<<" "<<lft<<" "<<rgt<<endl;
	int rtop = min(top,rgt);
	int rbot = min(bot,rgt);
	int ltop = min(top,lft);
	int lbot = min(bot,lft);
	// cout<<rtop<<" "<<rbot<<" "<<ltop<<" "<<lbot<<endl;
	int temp;
	for(i=0;i<m;i++){
		cin>>y1>>x1;
		if(x1 == x){
			if(y1 > y){
				if(y1-1 < tn)
					tn = y1-1;
			}
			else{
				if(y1+1 > bn)
					bn = y1+1;
			}
			// cout<<"Yes"<<endl;
		}
		if(y1 == y){
			if(x1 > x){
				if(x1-1 < rn)
					rn = x1-1;
			}
			else{
				if(x1+1 > ln)
					ln = x1+1;
			}
			// cout<<"Yes"<<endl;	
		}
		if(x1 - x == y1 - y){
			if(x1 > x){
				temp = min(x1 - x -1 , y1 - y -1);
				if(rtop > temp)
					rtop = temp;
			}
			else{
				temp = min(x - x1 -1, y - y1 -1);
				if(lbot > temp)
					lbot = temp;	
			}
			// cout<<"Yes"<<endl;
		}
		if(x1 - x == -(y1 - y)){
			if(x1 > x){
				temp = min(x1 - x -1, y - y1 -1);
				if(rbot > temp)
					rbot = temp;
			}
			else{
				temp = min(x - x1 -1, y1 - y -1);
				if(ltop > temp)
					ltop = temp;	
			}
		// cout<<"Yes"<<endl;
		}
	}
	top = tn - y;
	bot = y - bn;
	lft = x - ln;
	rgt = rn - x;
	// cout<<top<<" "<<bot<<" "<<lft<<" "<<rgt<<endl;
	// cout<<rtop<<" "<<rbot<<" "<<ltop<<" "<<lbot<<endl;
	sum = top + bot + lft + rgt + rtop + rbot + ltop + lbot;
	cout<<sum;
	return 0;
}