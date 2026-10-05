#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "Film.cpp"

using namespace std;

// Class Komposisi & Array of Objects (Vector)
class Bioskop {
private:
    string namaBioskop;
    vector<shared_ptr<Film>> daftarFilm; // Array/Vector of Objects

public:
    Bioskop(string nama) {
        this->namaBioskop = nama;
    }

    void tambahFilm(shared_ptr<Film> film) {
        daftarFilm.push_back(film);
    }

    void tampilkanDaftarFilm() const {
        cout << "==========================================" << endl;
        cout << "Daftar Film di Bioskop: " << namaBioskop << endl;
        cout << "==========================================" << endl;
        if (daftarFilm.empty()) {
            cout << "(Belum ada film yang ditayangkan)" << endl << endl;
        } else {
            for (size_t i = 0; i < daftarFilm.size(); ++i) {
                cout << i + 1 << ". ";
                daftarFilm[i]->tampilkanInfo();
            }
            cout << endl;
        }
    }
};