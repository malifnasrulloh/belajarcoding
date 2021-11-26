// import java.util.Scanner;

public class Main {
    // static Scanner scanf=new Scanner(System.in);
    public static void main(String[] args){
        bit(0);
        bit(1);
    }
    static void bit(int b){
        String bits = String.format("%8s",Integer.toBinaryString(b)).replace(' ','0');
        System.out.printf("binary dari %d : %s\n",b,bits);
    }
}