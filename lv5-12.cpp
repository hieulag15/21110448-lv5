#include<iostream>
int Giaithua(int n);
int Tong(int n);
float Sum(int n);
using namespace std;


int main() {
	int n;
	do 
	{
		cout<<"Nhap n: ";
		cin >> n;
	} while ( n < 0);
	cout<<"Tong la: "<<Sum(n);
	return 0;
}

int Giaithua(int n){
	if (n == 1)
		return 1;
	return n * Giaithua(n - 1);
}

int Tong(int n){
	int tong = 0;
	for (int i = 1; i <= n; i++){
		tong += i;
	}
	return tong;
}

float Sum(int n){
	float sum = 0;
	for (int i = 1; i <= n; i++){
		sum += 1.0*Tong(i)/Giaithua(i);
	}
	return sum;
}
