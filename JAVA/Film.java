// Parent Class (Superclass)
public class Film {
    protected String judul;
    protected int durasi; // dalam menit

    public Film(String judul, int durasi) {
        this.judul = judul;
        this.durasi = durasi;
    }

    public void tampilkanInfo() {
        System.out.print("Judul: " + judul + " | Durasi: " + durasi + " menit");
    }
}