import java.util.Scanner;

public class Main {
    static Scanner input=new Scanner(System.in); //wajib ada saat mau input. input habis tulisan Scanner adalah seperti variabel yang bertipe Scanner
    public static void main(String[] args) throws Exception {
        float a;
        int b;
        System.out.printf("Masukkan Panjang\t: ");
        a=input.nextFloat();
        System.out.printf("Masukkan lebar\t\t: ");
        b=input.nextInt();
        System.out.println("Luas\t\t\t: "+a/b);


        
    }
}
