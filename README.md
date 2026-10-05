# JANJI
Saya Khalifa Nabil Nur dengan NIM 2511372, mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya. Maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## DIAGRAM
<img width="533" height="712" alt="TP3 drawio" src="https://github.com/user-attachments/assets/c523e4fd-8403-48ac-81f4-73b3664a00d4" />

## HUBUNGAN ANTAR KELAS 
1. Hierarchical Inheritance
- Definisi: Terjadi ketika satu kelas superclass (Film) diturunkan secara sejajar ke lebih dari satu subclass (FilmAksi dan FilmAnimasi).   
- Tujuan: Menerapkan prinsip reusability (penulisan kode berulang dihindari), sehingga properti umum seperti judul dan durasi cukup ditulis satu kali pada kelas induk.

2. Composition & Array of Objects
- Definisi: Menandakan hubungan "Has-A" (Memiliki), di mana kelas Bioskop menjadi wadah utama yang memiliki sekumpulan objek Film.
- Tujuan: Memungkinkan penyimpanan banyak objek film turunan secara fleksibel dalam satu kontainer/array, sehingga sistem dapat menambahkan data film secara dinamis saat program berjalan

## PENJELASAN DESAIN 
1. Kelas Induk / Parent Class (Film)
- Peran: Menjadi kelas dasar yang menyimpan atribut dan fungsi universal yang pasti dimiliki oleh semua jenis film.
- Atribut: judul: string – Menampung nama atau judul film. durasi: int – Menampung panjang waktu tayang film dalam menit.
- Method/Fungsi: Film(judul, durasi) – Konstruktor untuk menginisialisasi atribut judul dan durasi. tampilkanInfo() – Fungsi virtual untuk mencetak detail dasar film.

2. Kelas Anak 1 / Subclass (FilmAksi)
- Peran: Mengimplementasikan Hierarchical Inheritance sebagai turunan dari kelas
- Atribut Khusus: tingkatKekerasan -string – Menampung kriteria/rating batas usia atau kekerasan (misal: "Remaja (13+)", "Dewasa (21+)")
- Method/Fungsi:
    - FilmAksi – Konstruktor yang memanggil konstruktor induk serta menginisialisasi tingkatKekerasan.
    - tampilkanInfo() – Menimpa fungsi induk untuk menampilkan detail gabungan (Judul, Durasi, Genre Aksi, dan Rating Kekerasan).

3. Kelas Anak 2 / Subclass (FilmAnimasi)
- Peran: Mengimplementasikan Hierarchical Inheritance sebagai turunan kedua dari kelas Film.
- Atribut Khusus:-studioAnimasi: string – Menampung nama rumah produksi animasi (misal: "Studio Ghibli", "Pixar").
- Method/Fungsi:
    - FilmAnimasi – Konstruktor yang memanggil konstruktor induk serta menginisialisasi studioAnimasi.
    - tampilkanInfo() – Menimpa fungsi induk untuk menampilkan detail gabungan (Judul, Durasi, Genre Animasi, dan Studio).

4. Kelas Pengelola / Composite Class (Bioskop)
- Peran: Mengimplementasikan hubungan Composition dan Array of Objects.
- Atribut: -namaBioskop: string – Menampung nama tempat bioskop. -daftarFilm: String – Berperan sebagai Array of Objects  yang menampung gabungan objek FilmAksi dan FilmAnimasi.
- Method/Fungsi:
    - Bioskop(nama) – Konstruktor pembuat tempat bioskop.
    - tambahFilm(film) – Menambahkan elemen objek baru ke dalam array daftarFilm.
    - tampilkanDaftarFilm() – Melakukan perulangan untuk mencetak seluruh film yang tersimpan.

## PENJELASAN ALUR PROGRAM
1. Inisialisasi Objek Utama (Bioskop)
2. Menampilkan Kondisi Awal (Sebelum Ada Data Film)
3. Perulangan Menu Input Interaktif (User Input Loop)       
    - User memilih jenis film (Aksi / Animasi)               
    - Instansiasi Objek Anak (FilmAksi / FilmAnimasi)        
    - Menyimpan ke Array/Vector/List via Composition
4. User Memilih Selesai (Keluar dari Menu Loop)
5. Menampilkan Kondisi Akhir (Daftar Lengkap Setelah Data Film Ditambahkan)

## DOKUMENTASI SEBELUM HARDCODE DATA
<img width="728" height="313" alt="image" src="https://github.com/user-attachments/assets/183f9fa2-fb56-4830-bed7-1c0140925577" />

## BUKTI PROGRAM CPP BERJALAN
<img width="995" height="954" alt="image" src="https://github.com/user-attachments/assets/d065c521-a1b9-42a9-980d-9194a0a49da4" />

## BUKTI PROGRAM PYTHON BERJALAN
<img width="963" height="943" alt="image" src="https://github.com/user-attachments/assets/266fd0f8-da4d-4dc3-948c-30ad1d3e787b" />

## BUKTI PROGRAM JAVA BERJALAN
<img width="992" height="914" alt="image" src="https://github.com/user-attachments/assets/615ad324-908c-4f9a-a235-4d855dec54f4" />




