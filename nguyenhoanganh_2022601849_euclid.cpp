#include <bits/stdc++.h>
using namespace std ;
int thuattoan(int a, int b, int &x, int &y) {
	if(b==0) {
		x=1;
		y=0;
		return a;
	}
	int x1,y1,x2,y2;
	int gcd = thuattoan(b, a%b, x1, y1);
	x=x2-(a/b)*x1;
	y=y2-(a/b)*y1;
	x=x1;
	y=y1;
	x1=x2;
	y1=y2;
	return gcd ;
}
int main() {
	int a,b ;
	cout<<"nhap 2 so nguyen a,b: ";
	cin>>a>>b;
	int x, y;
	int gcd = thuattoan(a,b,x,y) ;
	cout << "uoc so chung lon nhat cua " << a  << "va"<< b <<"la: "<< gcd <<endl;
	cout<<"cac so nguyen x va y tmpt " << a <<"*x+"<< b <<"*y ="<< gcd <<" la: x= "<< x <<", y= " <<y<<endl;
	return 0;
}
