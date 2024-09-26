#include <iostream>

using namespace std;

int main() {
	float hargabarang, diskon, hargabersih;
	cout << "Harga Barang       : Rp. ";
	cin >> hargabarang;
	diskon = hargabarang * 12.5 / 100;
	hargabersih = hargabarang - diskon;

	cout << "Total Harga Sebelum Diskon     : Rp. " << hargabarang << endl;
	cout << "Diskon 12.5%                   : Rp. " << diskon << endl;
	cout << "                                 -------------------- -" << endl;
	cout << "Harga Bersih                   : Rp. " << hargabersih << endl;


}