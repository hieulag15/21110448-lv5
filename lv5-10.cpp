#include<iostream>
bool Kiemtra(int n);
using namespace std;


int main() {
	for (int i = 10; i < 100; i++){
		if (Kiemtra(i))
			cout<<i<<" ";
	}
	return 0;
}

bool Kiemtra(int n){
	int s = n / 10, last = n % 10;
	if ((s * last) == (s + last))
		return true;
	return false;
}
