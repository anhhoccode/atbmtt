#include<iostream>
using namespace std;
int power (int a, int b ,int n) {
    int f = 1;
    while (b>0) {
        if(b % 2 == 1) {
        	f = (f * a) % n ;    
    	}
        a = (a* a) % n;
        b/=2;
    }
    return f;
}
bool songuyento (int b, int k) {
	if(b<2) 
		return false;
	if(b==2 || b==3) 
		return true;
	if(b%2 ==0 || b%3 ==0) 
		return false;
	for (int i = 0; i<k; i++) {
		int a = rand() % (b-1) + 1;
		if (power(a,b-1,b) !=1)
			return false;
	}
	return true;
}
int main() {
	int b;
	cout<<"nhap so can kiem tra: ";
	cin>>b;
	int k=10;
	if (songuyento(b,k))
		cout<<b<< " la so nguyen to" <<endl;
	else 
	cout<<b<< " khong phai la so nguyen to" <<endl;
	return 0;
}