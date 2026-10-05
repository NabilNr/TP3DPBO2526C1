#pragma once
#include "Film.cpp"

// Child Class 1 (Hierarchical Inheritance)
class FilmAksi : public Film {
private:
    string tingkatKekerasan;

public:
    FilmAksi(string judul, int durasi, string tingkatKekerasan)
        : Film(judul, durasi) {
        this->tingkatKekerasan = tingkatKekerasan;
    }

    void tampilkanInfo() const override {
        Film::tampilkanInfo();
        cout << " | Genre: Aksi | Rating Kekerasan: " << tingkatKekerasan << endl;
    }
};