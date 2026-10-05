// Child Class 1 (Hierarchical Inheritance)
public class FilmAksi extends Film {
    private String tingkatKekerasan;

    public FilmAksi(String judul, int durasi, String tingkatKekerasan) {
        super(judul, durasi);
        this.tingkatKekerasan = tingkatKekerasan;
    }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println(" | Genre: Aksi | Rating Kekerasan: " + tingkatKekerasan);
    }
}