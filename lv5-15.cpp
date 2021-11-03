#include<iostream>
#include<math.h>
double Ketqua(int n, float x);
using namespace std;


int main() {
	int n,k;
	do 
	{
		cout<<"Nhap n: ";
		cin >> n;
		cout<<"Nhap k: ";
		cin >> k;
	} while ((n < 0) or (k < 1));
	cout<<"Ket qua la: "<<Ketqua(n,k);
	return 0;
}

double Ketqua(int n, float x){
	double sum = 0;
	for (int i = n; i >= 1; i--){
		sum = 1.0*sqrt(x + sum);
	}
	return sum;
}
