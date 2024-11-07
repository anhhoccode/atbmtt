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
int main () {
    int a,b,n;
    cout<<"nhap a : " ;
    cin>>a;
    cout<<"nhap b : ";
    cin>>b;
	cout<<"nhap n : ";
    cin>>n;
    cout<<"a^b mod n = " << power(a,b,n) <<endl;
    return 0; 
}
