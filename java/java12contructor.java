import java.util.Scanner;

//constructor
class smansa{
    String nama="alip";
    String kelas;
    int NIM;

    smansa(int Sama){
        System.out.println(Sama);
    }
}

public class java12contructor {
    static Scanner input=new Scanner(System.in);
    public static void main(String args[]){
        smansa Muridku = new smansa(2323); //objek dibuat dan dimasukkan di Muridku
        new smansa(2312312); //objek dibuat saja
        Muridku.NIM=input.nextInt();
        System.out.println(String.format("%8s",Integer.toBinaryString(Muridku.NIM)).replace(" ","0"));
    }
}
