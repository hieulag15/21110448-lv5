#include<iostream>
int Kiemtra(int n);
using namespace std;

	
int main() {
	int n;
	do {
	cout <<" Nhap n: ";
	cin >> n;
	} while ( n < 0);
	cout<<"So lon nhat trong n la: "<<Kiemtra(n);
	return 0;
}

int Kiemtra(int n){
	int s = n, last , max = s % 10;
	while (s > 0){
		last = s % 10;
		s /= 10;
		if (last > max){
			max = last;
		}
	}
	return max;
}