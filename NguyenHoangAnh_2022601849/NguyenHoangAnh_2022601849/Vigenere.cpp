#include<iostream>
#include<string>
using namespace std;
string mahoaVigenere(string &vanBan, string &khoa) {
	string ketQua = "";
	int khoaIndex=0;
	int khoaLength = khoa.length();
	for (char c:vanBan) {
		if(isalpha(c)) {
			char coSo = islower(c) ? 'a' : 'A';
			char khoaChar = tolower(khoa[khoaIndex % khoaLength]) ;
			ketQua += char(int(coSo + (c - coSo + (khoaChar - 'a'))%26));
			khoaIndex++;
} else {
	ketQua += c;
}
}
return ketQua;
}
int main() {
	string vanBan;
	string khoa;
	cout<<"nhap van ban can ma hoa :";
	getline(cin,vanBan);
	cout<<"nhap khoa ma hoa: ";
	cin>>khoa;
	string vanBanMaHoa = mahoaVigenere (vanBan,khoa);
	cout<<"van ban da ma hoa: "<< vanBanMaHoa << endl;
	return 0;
}