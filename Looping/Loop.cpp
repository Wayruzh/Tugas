#include <iostream>
using namespace std;

int main() {
	int genap = 0;
	int ganjil = 0;
	int data;
	int input;
		cout << "Masukkan angka = ";
		cin >> input;

	for (int data = 0; data <= input; data++) {
		if (data % 2 == 0) {
			genap += data;
		}
		else {
			ganjil += data;
		}
	}
	cout << "jumlah total bilangan ganjil :" << ganjil << endl;
	cout << "jumlah total bilangan genap :" << genap << endl;
}
