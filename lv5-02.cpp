#include<iostream>
#include<math.h>
bool Kiemtra(int n);
using namespace std;


int main() {
	int n;
	cout<<"Nhap n: ";
	cin >> n;
	if (Kiemtra(n)){
		cout<<n<<" la so nguyen to";
	} else {
		cout<<n<<" khong la so nguyen to";
	}
	return 0;
}

bool Kiemtra(int n){
	if (n < 2) return false;
	for (int i = 2; i < sqrt(n); i++){
		if (n % i == 0)
			return false;
	} 
	return true;
}