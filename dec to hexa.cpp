#include <iostream>
using namespace std;

int main() {
    int decimal_number, rem;
    char hex_digits[] = "0123456789ABCDEF";

    decimal_number=254;

    cout << "The hexadecimal representation is: ";
    string hex_number = "";

    while (decimal_number > 0) {
        rem = decimal_number % 16;
        hex_number = hex_digits[rem] + hex_number; 
        decimal_number /= 16; 
    }

    cout << hex_number << endl;
    return 0;
}
