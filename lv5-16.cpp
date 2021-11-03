#include<iostream>
void Sotien(int n);
using namespace std;


int main(){
	int n;
	cout<<"Nhap so tien (phai chia het cho 10000): ";
	cin >> n;
	Sotien(n);
	return 0;
}

void Sotien(int n){
	int Mottram = n / 100000;
	n = n % 100000;
	int Namchuc = n / 50000;
	n = n % 50000;
	int Haichuc = n / 20000;
	n = n % 20000;
	int Motchuc = n / 10000;
	cout<<"So to 100000 la: "<<Mottram<<endl;
	cout<<"So to 50000  la: "<<Namchuc<<endl;
	cout<<"So to 20000  la: "<<Haichuc<<endl;
	cout<<"So to 10000  la: "<<Motchuc;
	
}
