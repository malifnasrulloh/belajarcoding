import java.util.Scanner;

public class Tugas1Marsa{
    public static void main (String[] args){
        Scanner sc = new Scanner(System.in);
        int jenisPembayaran, jenisLayanan, beratBarang, jumlahBarang, totalBarang, layananCepat, layananReguler, biayaPengiriman;
        String jenisPackaging, jenisBarang, kota, kec, prov, nama;
        double noResi, noTelp;

        System.out.print("Masukkan nama pengirim: ");
        nama = sc.nextLine();
        System.out.println("Masukkan alamat pengirim: ");
        kota = sc.nextLine();
        kec = sc.nextLine();
        prov = sc.nextLine();
        System.out.println("Masukkan no telpon pengirim: ");
        noTelp = sc.nextDouble();
        
        System.out.println("Masukkan no resi pengiriman: ");
        noResi = sc.nextDouble();
        System.out.print("Masukkan jumlah barang: ");
        jumlahBarang = sc.nextInt();
        System.out.print("Masukkan berat barang: ");
        beratBarang = sc.nextInt();
        System.out.println("Apakah anda ingin menggunakan layanan cepat (0 = tidak , 1 = iya) ? ");
        jenisLayanan = sc.nextInt();
        totalBarang=jumlahBarang;
        System.out.println(" " + nama + " " + totalBarang);

        if(jenisLayanan == 0){
            if(totalBarang > 2 ){
                biayaPengiriman = 10000;
                System.out.println("Biaya pengirimannya: " + biayaPengiriman);
            } else if(totalBarang > 8) {
                biayaPengiriman = 15000;
                System.out.println("Biaya pengirimannya: " + biayaPengiriman);
            } else {
                biayaPengiriman = 0;
                System.out.println("Biaya pengirimannya: " + biayaPengiriman);
            } 
        }else if(jenisLayanan == 1){
            if(totalBarang > 10){
                biayaPengiriman = 20000;
                System.out.println("Biaya pengirimannya: " + biayaPengiriman);
            } else if(totalBarang > 15){
                biayaPengiriman = 25000;
                System.out.println("Biaya pengirimannya: " + biayaPengiriman);
            }
        }
    }
}

            
        

             
         

    