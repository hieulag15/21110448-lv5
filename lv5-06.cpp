#include<iostream>
#include<math.h>
bool Kiemtra(int n);
int Dem(int n);
using namespace std;


int main() {
	int n;
	do {
	cout <<" Nhap n: ";
	cin >> n;
	} while ( n < 0);
	cout<<"Trong n co tat ca so nguyen to la: "<<Dem(n);
	return 0;
}

bool Kiemtra(int n){
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0)
			return false;
	} 
	return true;
}

int Dem(int n){
	int s = n, last,dem = 0;
	while (s > 0){
		last = s % 10;
		s /= 10;
		if (Kiemtra(last)){
			dem++;
		}
	}
	return dem;
}