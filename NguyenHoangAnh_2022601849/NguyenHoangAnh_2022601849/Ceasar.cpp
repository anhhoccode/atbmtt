#include<iostream>
#include<string>
using namespace std;
string mahoaCaesar( string &vanBan, int dichChuyen) {
	string ketQua = "";
	for (char c:vanBan) {
		if(isalpha(c)) {
			char coSo = islower(c) ? 'a' : 'A';
			ketQua += char(int(coSo + (c - coSo + dichChuyen ) % 26 )) ;
		} else {
			ketQua += c;
		}
	}
	return ketQua;
}
int main() {
	string vanBan;
	int dichChuyen;
	cout<<"nhap van ban can ma hoa: ";
	getline(cin,vanBan);
	cout<<"nhap so dich chuyen(k): ";
	cin>>dichChuyen;
	dichChuyen = dichChuyen % 26;
	string vanBanMaHoa = mahoaCaesar (vanBan,dichChuyen);
	cout<<"van ban da ma hoa: "<< vanBanMaHoa << endl;
	return 0;
}