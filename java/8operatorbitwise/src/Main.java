// import java.util.Scanner;

public class Main {
    // static Scanner scanf=new Scanner(System.in);
    /*
    and             &
    or              |
    xor             ^
    not             ~
    shift left      <<
    ----- right     >>
    */
    public static void main(String[] args){
        bit(4);
        bit(7);
        bit('&',4&7);
        bit('|',4|7);
        bit('^',4^7);
        bit('~',~4);
        bit("<<",9<<2);
        bit(">>",9>>2);
    }
    static void bit(int b){
        String bits = String.format("%8s",Integer.toBinaryString(b)).replace(' ','0');
        System.out.printf("binary dari %d\t\t: %s\n",b,bits);
    }
    static void bit(String wise,int b){
        String bits = String.format("%8s",Integer.toBinaryString(b)).replace(' ','0');
        System.out.printf("bitwise (%s) menjadi %d\t: %s\n",wise,b,bits);
    }
    static void bit(char wise,int b){
        String bits = String.format("%8s",Integer.toBinaryString(b)).replace(' ','0');
        System.out.printf("bitwise (%s) menjadi %d\t: %s\n",wise,b,bits);
    }
}