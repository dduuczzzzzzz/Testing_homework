#include<iostream>

using namespace std;

int money_to_pay(int room_type, int days) {
	if(room_type < 1 || room_type > 3) {
		return -1;
	}
	if(days < 1) {
		return -1;
	}
	int money_per_day;
	switch (room_type)
	{
		case 1:
			money_per_day = 1000000;
			break;

		case 2: 
			money_per_day = 500000;
			break;

		case 3: 
			money_per_day = 300000;
			break;	
		
		default:
			break;
	}
	int total = money_per_day * days;
	if(days >= 3 && days <= 5) {
		total = total - total/10;
	}
	else if(days >= 6) {
		total = total - total*20/100;
	}
	return total;
}

int main() {
	int room_type; int days;
	cout << "Nhap loai phong: "; cin >> room_type;
	cout << "\n";
	cout << "Nhap so ngay: "; cin >> days;
	cout << "\n";
	int money = money_to_pay(room_type, days);
	if (money == -1) {
		cout << "Khong hop le";
	}
	else {
		cout << "So tien phai tra la: " << money;
	}
	
	return 0;
}