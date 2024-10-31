#include <iostream>
using namespace std;

void hitungEK(float massa, float kecepatan) {
	float energiKinetik = 0.5 * massa * kecepatan * kecepatan;
	cout << "Energi Kinetik: " << energiKinetik << "Joule" << endl;
}

int main() {
	float massaSepeda, beratAndika, massaTotal, kecepatan;

	cout << "Masukkan massa sepeda (gram): ";
	cin >> massaSepeda;
	cout << "Masukkan berat Andika (kg): ";
	cin >> beratAndika;
	cout << "Masukkan kecepatan (m/s): ";
	cin >> kecepatan;

	massaSepeda /= 1000;
	massaTotal = massaSepeda + beratAndika;

	hitungEK(massaTotal, kecepatan);

	return 0;
}