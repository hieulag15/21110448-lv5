#include<iostream>
bool Kiemtra(int n);
using namespace std;


int main() {
	int n;
	cout<<"Nhao n: ";
	cin >> n;
	if (Kiemtra(n)){
		cout<<n<<" la so hoan hao";
	} else {
		cout<<n<<" khong la so hoan hao";
	}
	return 0;
}

bool Kiemtra(int n){
	int sum = 0;
	for (int i = 1; i < n; i++){
		if (n % i == 0){
			sum += i;
		}
	}
	if (sum == n)
		return true;
	return false;
}

