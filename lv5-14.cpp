#include<iostream>
int Giaithua(int n);
int Ketqua(int n, int k);
using namespace std;


int main() {
	int n,k;
	do 
	{
		cout<<"Nhap n: ";
		cin >> n;
		cout<<"Nhap k: ";
		cin >> k;
	} while ((k > n) or (n < 0) or (k < 1));
	cout<<"Ket qua la: "<<Ketqua(n,k);
	return 0;
}

int Giaithua(int n){
	if (n == 1)
		return 1;
	return n * Giaithua(n - 1);
}

int Ketqua(int n, int k){
	int kq;
	kq = Giaithua(n) / (Giaithua(k) * Giaithua(n - k));
	return kq;
}
