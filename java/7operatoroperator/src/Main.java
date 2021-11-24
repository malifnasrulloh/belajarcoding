public class Main {
    public static void main(String[] args){
        int a=12;
        System.out.printf("a : %d",-a);
        System.out.printf("\na : %d",+a);

        a=-12;
        System.out.printf("\na : %d",-a);
        System.out.printf("\na : %d",+a);
        System.out.printf("\nHello world");

        //operator komparasi
        System.out.printf("\n%d sama dengan %d ? : %s",-12,12,a==-12);
        System.out.printf("\n%d sama dengan %d ? : %s",12,11,a==11);
        if (a==1) {
            System.out.printf("\n%d sama dengan %d ? : %s",12,12,(a==12));
        }else if(a==1){
            System.out.printf("\n%d sama dengan %d ? : %s",12,12,(a==12));
        }
        switch (a) {
            case 1:
                System.out.printf("\n%d sama dengan %d ? : %s",12,12,(a==12));
                break;
            default:
                break;
        }
        //operator logika
        // and(&&), or(||), xor(^), not (!)
    }
}
