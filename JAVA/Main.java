import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Bioskop bioskop = new Bioskop("Empire XXI Bandung");

        // Print data awal sebelum penambahan
        System.out.println("--- TAMPILAN SEBELUM PENAMBAHAN DATA ---");
        bioskop.tampilkanDaftarFilm();

        int pilihan = 0;
        while (pilihan != 3) {
            System.out.println("=== MENU INPUT FILM MANUAL ===");
            System.out.println("1. Tambah Film Aksi");
            System.out.println("2. Tambah Film Animasi");
            System.out.println("3. Tampilkan Semua Film & Selesai");
            System.out.print("Pilih menu (1/2/3): ");
            pilihan = scanner.nextInt();
            scanner.nextLine(); // Membersihkan buffer newline

            if (pilihan == 1) {
                System.out.println("\n--- Input Film Aksi ---");
                System.out.print("Masukkan Judul Film: ");
                String judul = scanner.nextLine();
                
                System.out.print("Masukkan Durasi (menit): ");
                int durasi = scanner.nextInt();
                scanner.nextLine(); // Membersihkan buffer newline
                
                System.out.print("Masukkan Rating Kekerasan (contoh: Remaja/Dewasa): ");
                String kekerasan = scanner.nextLine();

                // Membuat objek baru dari input user lalu menambahkan ke ArrayList
                FilmAksi filmAksi = new FilmAksi(judul, durasi, kekerasan);
                bioskop.tambahFilm(filmAksi);
                System.out.println("-> Film Aksi berhasil ditambahkan!\n");

            } else if (pilihan == 2) {
                System.out.println("\n--- Input Film Animasi ---");
                System.out.print("Masukkan Judul Film: ");
                String judul = scanner.nextLine();
                
                System.out.print("Masukkan Durasi (menit): ");
                int durasi = scanner.nextInt();
                scanner.nextLine(); // Membersihkan buffer newline
                
                System.out.print("Masukkan Nama Studio Animasi: ");
                String studio = scanner.nextLine();

                // Membuat objek baru dari input user lalu menambahkan ke ArrayList
                FilmAnimasi filmAnimasi = new FilmAnimasi(judul, durasi, studio);
                bioskop.tambahFilm(filmAnimasi);
                System.out.println("-> Film Animasi berhasil ditambahkan!\n");
            }
        }

        // Print data akhir setelah penambahan
        System.out.println("--- TAMPILAN SETELAH PENAMBAHAN DATA ---");
        bioskop.tampilkanDaftarFilm();

        scanner.close();
    }
}