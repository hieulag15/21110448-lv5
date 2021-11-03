#include<iostream>
int Dem(int day, int month, int year);
using namespace std;


int main() {
	int day, month, year;
	cout<<"Nhap Nam: ";
	cin >> year;
	cout<<"Nhap Thang: ";
	cin >> month;
	cout<<"Nhap Ngay: ";
	cin >> day;
	cout<<"Ngay "<<day<<" thang "<<month <<" nam "<<year<<endl;
	cout<<"Ngay thu: "<<Dem(day,month,year)<<" trong nam";
	return 0;
}

int Dem(int day, int month, int year){
	int s = day;
	for (int i = 1; i < month; i++){
		switch(i){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				s += 31;
				break;
			case 2:
				if (year % 400 == 0){
					s += 29;
				} else {
					if ((year % 4 == 0) && (year % 100 != 0)){
						s += 29;
					} else {
						s += 28;
					}
				}
				break;
			default :
				s += 30;
		}	
	}
	return s;
	
}
