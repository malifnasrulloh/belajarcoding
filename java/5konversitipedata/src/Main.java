public class Main {
    public static void main(String[] args){
        int a=128;
        int b=4;
        // float c=a/b; //akan bertipe data float, tetapi hasil masih berupa seperti integer
        float c=(float)a/b; // cara paling ez untuk konversi tipe data
        System.out.println(c);
        //int atau bilangan apapun yang dibagi float akan menjadi tipe data float

        //mengubah int ke long
        long d=a;
        System.out.println("long : "+d);

        //mengubah int ke byte
        // byte e=a; //cara ini tidak akan bisa
        byte e=(byte)a;
        System.out.println(e);
        /* 
        karena byte memiliki ukuran 127 dan -128 maka nilai akan berputar terus sampai terhenti jika melebihi ukurannya
        urutannya 1 >> 127 >> -128 >> -1 >> 0 >> 1 begitu terusss
        */
    }
}
