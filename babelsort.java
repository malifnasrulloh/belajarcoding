import java.util.Scanner;

public class babelsort{
    static Integer[] arr = new Integer[1024];
    static String[] input = new String[1024];
    static Scanner in = new Scanner(System.in);
    static Integer temp;

    public static void main(String[] args) {
        System.out.println("Masukkan input angka(x,x,x) : ");
        input = in.nextLine().split(",");
        for(int i=0;i<input.length;i++){
            arr[i] = Integer.parseInt(input[i]);
            System.out.println(arr[i]);
        }

        for(int i=0;i<arr.length;i++){
            if(arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        for (int j = 0; j < arr.length; j++) {
            System.out.print(arr[j]+" ");
        }
    }
}