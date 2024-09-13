#include <iostream> 
#include <cstdlib>  // Untuk fungsi rand() dan srand()
#include <ctime>    // Untuk fungsi time()

using namespace std;

int main() {
    int angkaTebakan, angkaAcak, tebakan;

    // Menginisialisasi generator angka acak
    srand(time(0));
    angkaAcak = rand() % 100 + 1;  // Bilangan acak antara 1 dan 100

    cout << "Selamat datang di permainan tebak angka!" << endl;
    cout << "Tebak angka antara 1 sampai 100." << endl;

    // Loop sampai tebakan benar
    do {
        cout << "Masukkan tebakan: ";
        cin >> tebakan;

        if (tebakan > angkaAcak) {
            cout << "Tebakan Anda terlalu tinggi!" << endl;
        } else if (tebakan < angkaAcak) {
            cout << "Tebakan Anda terlalu rendah!" << endl;
        } else {
            cout << "Selamat! Anda menebak angka dengan benar." << endl;
        }
    } while (tebakan != angkaAcak);

    return 0;
}
