#include <iostream>
using namespace std ;
int thuattoan(int a, int b, int &x, int &y) {
	if(b==0) {
		x=1;
		y=0;
		return a;
	}
	int x1,y1;
	int gcd = thuattoan(b, a%b, x1, y1);
	x=y1;
	y=x1-(a/b)*y1;
	return gcd ;
}
int Nghichdao(int a, int n ) {
	int x,y;
	int gcd = thuattoan(a,n,x,y);
	if(gcd!=1) {
		cout<<"nghich dao ko ton tai";
		return -1;
	} 
	else {
		int result = (x%n + n ) % n;
		return result;
	}
}
int main() {
	int a=25 ;
	int n=101;
	int nghichdao = Nghichdao(a,n);
	if ( nghichdao!= -1) {
		cout<< "gia tri nghich dao cua " <<a<< " mod " << n <<"la :" << nghichdao <<endl;
	}
	return 0;
}