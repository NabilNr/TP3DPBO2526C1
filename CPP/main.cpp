#include <iostream>
#include <string>
#include <memory>
#include "Bioskop.cpp"
#include "FilmAksi.cpp"
#include "FilmAnimasi.cpp"

using namespace std;

int main() {
    Bioskop bioskop("CGV Grand Indonesia");

    // Print data awal sebelum penambahan
    cout << "--- TAMPILAN SEBELUM PENAMBAHAN DATA ---" << endl;
    bioskop.tampilkanDaftarFilm();

    int pilihan = 0;
    while (pilihan != 3) {
        cout << "=== MENU INPUT FILM MANUAL ===" << endl;
        cout << "1. Tambah Film Aksi" << endl;
        cout << "2. Tambah Film Animasi" << endl;
        cout << "3. Tampilkan Semua Film & Selesai" << endl;
        cout << "Pilih menu (1/2/3): ";
        cin >> pilihan;
        cin.ignore(); // Membersihkan buffer enter

        if (pilihan == 1) {
            string judul, kekerasan;
            int durasi;

            cout << "\n--- Input Film Aksi ---" << endl;
            cout << "Masukkan Judul Film: ";
            getline(cin, judul);
            cout << "Masukkan Durasi (menit): ";
            cin >> durasi;
            cin.ignore();
            cout << "Masukkan Rating Kekerasan (contoh: Remaja/Dewasa): ";
            getline(cin, kekerasan);

            // Membuat pointer objek dari input user lalu menambahkan ke vector
            auto filmAksi = make_shared<FilmAksi>(judul, durasi, kekerasan);
            bioskop.tambahFilm(filmAksi);
            cout << "-> Film Aksi berhasil ditambahkan!\n" << endl;

        } else if (pilihan == 2) {
            string judul, studio;
            int durasi;

            cout << "\n--- Input Film Animasi ---" << endl;
            cout << "Masukkan Judul Film: ";
            getline(cin, judul);
            cout << "Masukkan Durasi (menit): ";
            cin >> durasi;
            cin.ignore();
            cout << "Masukkan Nama Studio Animasi: ";
            getline(cin, studio);

            // Membuat pointer objek dari input user lalu menambahkan ke vector
            auto filmAnimasi = make_shared<FilmAnimasi>(judul, durasi, studio);
            bioskop.tambahFilm(filmAnimasi);
            cout << "-> Film Animasi berhasil ditambahkan!\n" << endl;
        }
    }

    // Print data akhir setelah penambahan
    cout << "--- TAMPILAN SETELAH PENAMBAHAN DATA ---" << endl;
    bioskop.tampilkanDaftarFilm();

    return 0;
}