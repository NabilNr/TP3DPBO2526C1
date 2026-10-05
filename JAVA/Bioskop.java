import java.util.ArrayList;

// Class Komposisi & Array of Objects (ArrayList)
public class Bioskop {
    private String namaBioskop;
    private ArrayList<Film> daftarFilm; // Array/ArrayList of Objects

    public Bioskop(String namaBioskop) {
        this.namaBioskop = namaBioskop;
        this.daftarFilm = new ArrayList<>();
    }

    public void tambahFilm(Film film) {
        daftarFilm.add(film);
    }

    public void tampilkanDaftarFilm() {
        System.out.println("==========================================");
        System.out.println("Daftar Film di Bioskop: " + namaBioskop);
        System.out.println("==========================================");
        if (daftarFilm.isEmpty()) {
            System.out.println("(Belum ada film yang ditayangkan)\n");
        } else {
            for (int i = 0; i < daftarFilm.size(); i++) {
                System.out.print((i + 1) + ". ");
                daftarFilm.get(i).tampilkanInfo();
            }
            System.out.println();
        }
    }
}