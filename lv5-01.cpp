#include<iostream>
#include<math.h>
bool Kiemtra(int n);
using namespace std;


int main() {
	int n;
	cout<<"Nhap n: ";
	cin >> n;
	if (Kiemtra(n)){
		cout<<n<<" la so chinh phuong";
	} else {
		cout<<n<<" khong la so chinh phuong";
	}
	return 0;
}

bool Kiemtra(int n){
	int sqr = sqrt(n);
	if (sqr * sqr == n)
		return true;
	return false;
}
