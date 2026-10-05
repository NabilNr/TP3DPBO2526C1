#pragma once
#include <iostream>
#include <string>
using namespace std;

// Parent Class (Superclass)
class Film {
protected:
    string judul;
    int durasi; // dalam menit

public:
    Film(string judul = "", int durasi = 0) {
        this->judul = judul;
        this->durasi = durasi;
    }

    virtual void tampilkanInfo() const {
        cout << "Judul: " << judul << " | Durasi: " << durasi << " menit";
    }

    virtual ~Film() {}
};