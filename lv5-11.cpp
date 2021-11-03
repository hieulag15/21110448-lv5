#include<iostream>
int Giaithua(int n);
int SUM(int n);
using namespace std;


int main() {
	int n;
	do 
	{
		cout<<"Nhap n: ";
		cin >> n;
	} while(n < 0);
	cout<<"Tong la: "<< SUM(n);
	return 0;
}

int Giaithua(int n){
	if (n == 1)
		return 1;
	return n * Giaithua(n - 1);
}

int SUM(int n){
	int sum = 0;
	for (int i = 1; i <= n; i++){
		sum += Giaithua(i);
	}
	return sum;
}