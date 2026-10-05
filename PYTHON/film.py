# Parent Class (Superclass)
class Film:
    def __init__(self, judul: str, durasi: int):
        self.judul = judul
        self.durasi = durasi

    def tampilkan_info(self) -> str:
        return f"Judul: {self.judul} | Durasi: {self.durasi} menit"