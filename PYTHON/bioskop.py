from film import Film

# Class Komposisi & Array of Objects
class Bioskop:
    def __init__(self, nama_bioskop: str):
        self.nama_bioskop = nama_bioskop
        self.daftar_film = []  # Array / List of Objects

    def tambah_film(self, film: Film):
        self.daftar_film.append(film)

    def tampilkan_daftar_film(self):
        print("==========================================")
        print(f"Daftar Film di Bioskop: {self.nama_bioskop}")
        print("==========================================")
        if not self.daftar_film:
            print("(Belum ada film yang ditayangkan)\n")
        else:
            for idx, film in enumerate(self.daftar_film, start=1):
                print(f"{idx}. {film.tampilkan_info()}")
            print()