#pragma once
#include "Film.cpp"

// Child Class 2 (Hierarchical Inheritance)
class FilmAnimasi : public Film {
private:
    string studioAnimasi;

public:
    FilmAnimasi(string judul, int durasi, string studioAnimasi)
        : Film(judul, durasi) {
        this->studioAnimasi = studioAnimasi;
    }

    void tampilkanInfo() const override {
        Film::tampilkanInfo();
        cout << " | Genre: Animasi | Studio: " << studioAnimasi << endl;
    }
};