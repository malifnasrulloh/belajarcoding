import java.util.Scanner;

class murid{// kelas
    String nama;
}

class java11kelasdanobj {
    static Scanner input=new Scanner(System.in);
    public static void main(String args[]){
        murid Kelas12=new murid(); //buat objek
        Kelas12.nama=input.nextLine();
        System.out.println("Nama mu adalah "+Kelas12.nama);




    }
}
