class java10fibonacci{
    static long a=0,b=1,c,d;
    public static void main(String[] args){
        for(int i=1;i<=100;i++){
            System.out.printf("%d, ",c);
            c=a+b;
            a=b;
            b=c;
        }
    }
}