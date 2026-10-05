from film import Film

# Child Class 1 (Hierarchical Inheritance)
class FilmAksi(Film):
    def __init__(self, judul: str, durasi: int, tingkat_kekerasan: str):
        super().__init__(judul, durasi)
        self.tingkat_kekerasan = tingkat_kekerasan

    def tampilkan_info(self) -> str:
        return f"{super().tampilkan_info()} | Genre: Aksi | Tingkat Kekerasan: {self.tingkat_kekerasan}"