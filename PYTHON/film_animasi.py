from film import Film

# Child Class 2 (Hierarchical Inheritance)
class FilmAnimasi(Film):
    def __init__(self, judul: str, durasi: int, studio_animasi: str):
        super().__init__(judul, durasi)
        self.studio_animasi = studio_animasi

    def tampilkan_info(self) -> str:
        return f"{super().tampilkan_info()} | Genre: Animasi | Studio: {self.studio_animasi}"