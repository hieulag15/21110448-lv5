#include<iostream>
#include<math.h>
#include<stdio.h>
void Nhap(int &year,int &month, int &day);
int Dem(int &day, int &month, int &year);
int Max(int &a, int &b);
int Min(int &a, int &b);
int Tinhtoan(int year1, int year2, int day1, int day2, int month1, int month2);
using namespace std;


int main() {
	int year1, month1, day1;
	int year2, month2, day2;
	Nhap(year1,month1,day1);
	Nhap(year2,month2,day2);
	cout<<"Khoang cach giua 2 ngay la: "<<Tinhtoan(year1,year2,day1,day2,month1,month2);
	return 0;
}

void Nhap(int &year,int &month, int &day){
	cout<<"Nhap Nam: ";
	cin >> year;
	cout<<"Nhap Thang: ";
	cin >> month;
	cout<<"Nhap Ngay: ";
	cin >> day;
}

int Dem(int &day, int &month, int &year){
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

int Max(int &a, int &b){
	int max = a;
	if (b > max)
		return b;
	return a;
}

int Min(int &a, int &b){
	int min = a;
	if (b < min)
		return b;
	return a;
}

int Tinhtoan(int year1, int year2, int day1, int day2, int month1, int month2){
	int songay1 = Dem(day1,month1,year1);
	int songay2 = Dem(day2,month2,year2);
	int kc, min, max, yearmin, yearmax;
	if (year1 == year2){
		kc = abs(songay2 - songay1);
		cout<<"Khoang cach giua hai ngay la: "<<kc;
		exit(0);
	} else {
		if (Min(year1,year2) == year1){
			yearmin = year1;
			min = songay1;
			yearmax = year2;
			max = songay2;
		} else {
			if (Min(year1,year2) == year2){
				yearmin = year2;
				min = songay2;
				yearmax = year1;
				max = songay1;
			}
		}
		if (yearmin % 400 == 0){
			kc = (366 - min) + max;
		} else {
			if ((yearmin % 4 == 0) && (yearmin % 100 != 0)){
				kc = (366 - min) + max;
			} else {
				kc = (365 - min) + max;
			}
		}
		for (int i = Min(year1,year2) + 1; i <= Max(year1,year2) - 1; i++){
			if (i % 400 == 0){
					kc = kc + 366;
				} else {
					if ((i % 4 == 0) && (i % 100 != 0)){
						kc = kc + 366;
					} else {
						kc = kc + 365;
					}
				}
		}
	}
	return kc;
}
