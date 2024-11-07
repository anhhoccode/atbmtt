#include<iostream>
#include<string>
using namespace std;
//nghich dao module
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
//UCLN
int gcd(int a, int b) {
	while (b!=0) {
		int t=b;
		b=a%b;
		a=t;
	}
	return a;
}
string mahoaAffine(string &vanBan, int a, int b) {
	string ketQua = "";
	for (char c:vanBan) {
		if(isalpha(c)) {
			char coSo = islower(c) ? 'a' : 'A';
			//E(x) = (a*x + b)mod 26
			ketQua += char(int(coSo + (a*(c-coSo)+b) % 26)) ;
	} else {
		ketQua += c;
	}
} 
return ketQua; 
}
int main() {
	string vanBan;
	int a,b;
	cout<<"nhap van ban can ma hoa :";
	getline(cin,vanBan);
	cout<<"nhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
	if(gcd(a,26) != 1) {
		cout<<"a ko ngto voi 26. vui long nhap lai." <<endl;
		return 1;
	}
	string vanBanMaHoa = mahoaAffine (vanBan,a,b);
	cout<<"van ban da ma hoa: "<< vanBanMaHoa << endl;
	return 0;
}