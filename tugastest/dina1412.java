import java.util.Scanner;

public class dina1412{
    static Scanner input = new Scanner(System.in);
	public static void main(String[] args){
		int pilih;
		System.out.println("Menu");
        System.out.println("1. Data Siswa");
        System.out.println("2. Mata Pelajaran");
        System.out.println("3. Input Nilai Siswa");
        System.out.println("4. Rapor Nilai");
        System.out.println("5. Nilai per Mata Pelajaran");
        System.out.print("\nPilih : ");
        pilih=input.nextInt();

        if(pilih == 1){
            System.out.println("\nMenampilkan Data Siswa");
        }else if(pilih == 2){
            System.out.println("\nMenampilkan Mata Pelajaran");
        }else if(pilih == 3){
            System.out.println("\nMenampilkan Input Nilai Siswa");
        }else if(pilih == 4){
            System.out.println("\nMenampilkan Rapor Nilai");
        }else if(pilih == 5){
            System.out.println("\nMenampilkan Nilai per Mata Pelajaran");
        }
        System.out.println("\n\n===== Data Siswa =====");
        System.out.println("Nama\t\t: Dina Maulidatur Rahma");
        System.out.println("No. Absen\t: 10");
        System.out.println("Kelas\t\t: 11 MIPA 4");


        System.out.println("\n\nMata Pelajaran\t  Nilai Siswa");
        System.out.println("-----------------------------");
        String[] maPel = {"Matematika","Biologi\t","Fisika\t","Kimia\t","B.Inggris","B.Indonesia","Agama\t","PKn\t","Sejarah\t"};
        int[] nilai = {90,95,90,91,93,94,89,90,88};
        for(int i = 0; i<nilai.length; i++){
            System.out.println(maPel[i]+"\t|\t"+nilai[i]);
        }
	}
}