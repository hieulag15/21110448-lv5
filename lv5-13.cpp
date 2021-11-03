#include<iostream>
#include<math.h>
void Nhap(int &n, float &x);
int Giaithua(int n);
void Sum(int n, float x, float &sum);
void Xuat(float a);
using namespace std;


int main() {
	int n;
	float x;
	float sum;
	Nhap(n,x);
	Sum(n,x,sum);
	Xuat(sum);
	return 0;
}

void Nhap(int &n, float &x){
	do 
	{
		cout<<"Nhap n: ";
		cin >> n;
	} while (n < 0);
	cout<<"Nhap x: ";
	cin >> x;
}

int Giaithua(int n){
	if (n == 1)
		return 1;
	return n * Giaithua(n - 1);
}

void Sum(int n, float x, float &sum){
	sum = 1;
	for (int i = 1; i <= n; i++){
		sum += pow(x,i) / Giaithua(i);
	}
}

void Xuat(float a){
	cout<<a;
}
