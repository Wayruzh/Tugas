#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Harga per kilogram untuk masing-masing buah
    const float hargaApel = 24000.0;
    const float hargaJeruk = 16250.0;
    const float hargaSemangka = 8000.0;

    // Variabel untuk menyimpan berat masing-masing buah
    float beratApel, beratJeruk, beratSemangka;

    // Input berat masing-masing buah dari keyboard
    cout << "Masukkan berat apel (kg): ";
    cin >> beratApel;
    cout << "Masukkan berat jeruk (kg): ";
    cin >> beratJeruk;
    cout << "Masukkan berat semangka (kg): ";
    cin >> beratSemangka;

    // Hitung total berat dan harga
    float totalBerat = beratApel + beratJeruk + beratSemangka;
    float totalHarga = (beratApel * hargaApel) + (beratJeruk * hargaJeruk) + (beratSemangka * hargaSemangka);

    // Terapkan diskon sesuai syarat
    if (totalBerat > 10) {
        totalHarga *= 0.95;  // Diskon 5%
        cout << "okarun mendapat diskon 5%!" << endl;
    }
    else if (totalBerat > 8) {
        totalHarga *= 0.98;  // Diskon 2%
        cout << "okarun mendapat diskon 2%!" <<endl;
    }

    // Tampilkan total harga dengan dua angka di belakang koma
    cout << fixed << setprecision(2);
    cout << "Total harga yang harus dibayar Okarun: Rp. " << totalHarga << endl;

    return 0;
}
