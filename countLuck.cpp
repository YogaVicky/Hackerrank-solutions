#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
char **a;
int numCrossJunctions;
bool found;
void move(int r,int c,int n,int m){
	if (found) return;
	int numPath=0;

	//try up
	if ((r-1)>=0) { // check for boundary first
	    if (a[r-1][c]=='.') {
	        a[r][c]='X';
	        numPath++;
	        move(r-1,c,n,m);
	    }
	    else if (a[r-1][c]=='*') {
	        numPath++;
	        found=true;
	    }    
	}

	//try down
	if ((r+1)<n) { // check for boundary first
	    if (a[r+1][c]=='.') {
	        a[r][c]='X';
	        numPath++;
	        move(r+1,c,n,m);
	    }
	    else if (a[r+1][c]=='*') {
	        numPath++;
	        found=true;
	    }    
	}

	//try left
	if ((c-1)>=0) { // check for boundary first
	    if (a[r][c-1]=='.') {
	        a[r][c]='X';
	        numPath++;
	        move(r,c-1,n,m);
	    }
	    else if (a[r][c-1]=='*') {
	        numPath++;
	        found=true;
	    }    
	}    

	//try right
	if ((c+1)<m) { // check for boundary first
	    if (a[r][c+1]=='.') {
	        a[r][c]='X';
	        numPath++;
	        move(r,c+1,n,m);
	    }    
	    else if (a[r][c+1]=='*') {
	        numPath++;
	        found=true;
	    }
	}    

	if (found && (numPath>1)) numCrossJunctions++;
}
int main(){
	int t;
	cin >> t;
	for (int test=0;test<t;test++) {
	    int n,m;
	    cin >> n >> m;

	    // allocate memory for grid        
	    a=(char **)malloc(sizeof(char *)*n);
	    a[0]=(char *)malloc(sizeof(char)*n*m);
	    for(int i=0;i<n;i++) a[i]=(*a+m*i);

	    // input grid & k
	    int startrow,startcol;
	    for (int r=0;r<n;r++) for (int c=0;c<m;c++) {
	        cin >> a[r][c];
	        if (a[r][c]=='M') { // found M position
	            startrow=r;
	            startcol=c;
	        }
	    }    
	    int k;
	    cin >> k;

	    // process
	    found=false;
	    numCrossJunctions=0;
	    move(startrow,startcol,n,m); // start from M

	    // Determine output     
	    if (numCrossJunctions==k) cout << "Impressed" << endl;
	    else cout << "Oops!" << endl;

	}
	return 0;
}