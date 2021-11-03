#include<iostream>
bool Kiemtra(int n);
int Maxdau(int n);
int MAX(int n);
using namespace std;


int main() {
	int n;
	do {
		cout<<"Mhap n: ";
		cin>>n;
	} while(n < 0);
	cout<<"Uoc le lon nhat la: "<<MAX(n);
	return 0;
}

bool Kiemtra(int n){
	if (n % 2 != 0)
		return true;
	return false;
}

int Maxdau(int n){
	int maxdau;
	for (int i = 1; i <= n; i++){
		if (n % i == 0)
			return i;
	}
}
int MAX(int n){
	int max = Maxdau(n);
	for (int i = 1; i < n; i++){
		if ((n % i == 0) && (i > max) && (Kiemtra(i)))
			max = i;
	}
	return max;
}