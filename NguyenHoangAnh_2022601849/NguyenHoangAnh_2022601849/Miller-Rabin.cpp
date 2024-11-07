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
bool songuyento (int b, int k=10) {
	if(b<2) 
		return false;
	if(b==2 || b==3) 
		return true;
	if(b%2 ==0 || b%3 ==0) 
		return false;
		int s=0;
		int d=b-1;
		while (d%2==0) {
			s++;
			d/=2;
		}
		for(int i=0; i<k; i++) {
			int a = rand() % (b-1) + 1;
			int x= power(a,d,b) ;
			if (x==1 || x==b-1)
				continue;
			for (int j=1 ; j<s; j++) {
				x=power(x,2,b) ;
				if (x==b-1)
					break;
			}
			if (x != b-1) 
				return false;
		}
		return true;
}
int main() {
	int b;
	cout<<"nhap so can kiem tra: ";
	cin>>b;
	if (songuyento(b))
		cout<<b<< " la so nguyen to" <<endl;
	else 
	cout<<b<< " khong phai la so nguyen to" <<endl;
	return 0;
}