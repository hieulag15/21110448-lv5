#include<iostream>
bool Kiemtra(int n);
bool Dem(int n);
using namespace std;


int main() {
	int n;
	do {
	cout <<" Nhap n: ";
	cin >> n;
	} while ( n < 0);
	if (Dem(n)){
		cout<<n<<" toan la so chan";
	} else {
		cout<<n<<" khong toan la so chan";
	}
	return 0;
}

bool Kiemtra(int n){
	if ( n % 2 == 0)
		return true;
	return false;
}

bool Dem(int n){
	int s = n, last,dem = 0;
	while (s > 0){
		last = s % 10;
		s /= 10;
		if (Kiemtra(last) == false){
			return false;
		}
	}
	return true;
}
