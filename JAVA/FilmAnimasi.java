// Child Class 2 (Hierarchical Inheritance)
public class FilmAnimasi extends Film {
    private String studioAnimasi;

    public FilmAnimasi(String judul, int durasi, String studioAnimasi) {
        super(judul, durasi);
        this.studioAnimasi = studioAnimasi;
    }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println(" | Genre: Animasi | Studio: " + studioAnimasi);
    }
}