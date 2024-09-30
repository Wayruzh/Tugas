#include <iostream>

int main() {
    double originalPrice = 150000;
    double discountPercentage = 12.5;

    double discountAmount = originalPrice * (discountPercentage / 100);
    double finalPrice = originalPrice - discountAmount;

    std::cout << "harga  : " << originalPrice << std::endl;
    std::cout << "Diskon : " << discountPercentage << std::endl;
    std::cout << "Besarnya diskon dari harga : " << discountAmount << std::endl;
    std::cout << "Harga setelah diskon : " << finalPrice << " ribu" << std::endl;

    return 0;
}