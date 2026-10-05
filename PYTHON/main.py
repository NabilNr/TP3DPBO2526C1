from bioskop import Bioskop
from film_aksi import FilmAksi
from film_animasi import FilmAnimasi

def main():
    bioskop = Bioskop("Cinema XXI PVJ Bandung")

    # Print data awal sebelum penambahan
    print("--- TAMPILAN SEBELUM PENAMBAHAN DATA ---")
    bioskop.tampilkan_daftar_film()

    while True:
        print("=== MENU INPUT FILM MANUAL ===")
        print("1. Tambah Film Aksi")
        print("2. Tambah Film Animasi")
        print("3. Tampilkan Semua Film & Selesai")
        pilihan = input("Pilih menu (1/2/3): ")

        if pilihan == "1":
            print("\n--- Input Film Aksi ---")
            judul = input("Masukkan Judul Film: ")
            durasi = int(input("Masukkan Durasi (menit): "))
            kekerasan = input("Masukkan Rating Kekerasan (contoh: Remaja/Dewasa): ")
            
            # Membuat objek baru dari input user dan menambahkan ke list
            film_aksi = FilmAksi(judul, durasi, kekerasan)
            bioskop.tambah_film(film_aksi)
            print("-> Film Aksi berhasil ditambahkan!\n")

        elif pilihan == "2":
            print("\n--- Input Film Animasi ---")
            judul = input("Masukkan Judul Film: ")
            durasi = int(input("Masukkan Durasi (menit): "))
            studio = input("Masukkan Nama Studio Animasi: ")
            
            # Membuat objek baru dari input user dan menambahkan ke list
            film_animasi = FilmAnimasi(judul, durasi, studio)
            bioskop.tambah_film(film_animasi)
            print("-> Film Animasi berhasil ditambahkan!\n")

        elif pilihan == "3":
            break
        else:
            print("Pilihan tidak valid! Silakan coba lagi.\n")

    # Print data akhir setelah penambahan
    print("\n--- TAMPILAN SETELAH PENAMBAHAN DATA ---")
    bioskop.tampilkan_daftar_film()

if __name__ == "__main__":
    main()