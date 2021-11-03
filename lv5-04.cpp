#include<iostream>
bool Kiemtra(int n);
using namespace std;


int main() {
	int n;
	cout <<" Nhap n: ";
	cin >> n;
	if (Kiemtra(n)){
		cout<<n<<" la so doi xung";
	} else {
		cout<<n<<" khong la so doi xung";
	}
	return 0;
}

bool Kiemtra(int n){
	int s = n, last, Sodao = 0;
	while (s > 0){
		last = s % 10;
		s /= 10;
		Sodao = Sodao * 10 + last;
	}
	if (Sodao == n)
		return true;
	return false;
}
	