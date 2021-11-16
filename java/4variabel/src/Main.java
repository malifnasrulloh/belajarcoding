public class Main {
    public static void main(String[] args){
        int a=1;
        long e=1232312313l;// ditambahin l biar tahu jika bertipe data long
        float b=2.91f;// sama juga
        short i=12123;
        double c=3.12912192d;// sama juga
        byte d=122;
        char h='a';
        boolean f=true;

        // long > int > short > byte
        // double > float
        System.out.println("int\t= "+a);
        System.out.println("Max\t= "+Integer.MAX_VALUE);
        System.out.println("min\t= "+Integer.MIN_VALUE);
        System.out.println(Integer.BYTES+" byte"+"\n"+Integer.SIZE+" bit\n");
        
        System.out.println("long\t= "+e);
        System.out.println("Max\t= "+Long.MAX_VALUE);
        System.out.println("min\t= "+Long.MIN_VALUE);
        System.out.println(Long.BYTES+" byte"+"\n"+Long.SIZE+" bit\n");
        
        System.out.println("short\t= "+i);
        System.out.println("Max\t= "+Short.MAX_VALUE);
        System.out.println("min\t= "+Short.MIN_VALUE);
        System.out.println(Short.BYTES+" byte"+"\n"+Short.SIZE+" bit\n");

        System.out.println("byte\t= "+d);
        System.out.println("Max\t= "+Byte.MAX_VALUE);
        System.out.println("min\t= "+Byte.MIN_VALUE);
        System.out.println(Byte.BYTES+" byte"+"\n"+Byte.SIZE+" bit\n");

        System.out.println("float\t= "+b);
        System.out.println("Max\t= "+Float.MAX_VALUE);
        System.out.println("min\t= "+Float.MIN_VALUE);
        System.out.println(Float.BYTES+" byte"+"\n"+Float.SIZE+" bit\n");

        System.out.println("double\t= "+c);
        System.out.println("Max\t= "+Double.MAX_VALUE);
        System.out.println("min\t= "+Double.MIN_VALUE);
        System.out.println(Double.BYTES+" byte"+"\n"+Double.SIZE+" bit\n");

        System.out.println("char\t= "+h);
        System.out.println("Max\t= "+Character.MAX_VALUE);
        System.out.println("min\t= "+Character.MIN_VALUE);
        System.out.println(Character.BYTES+" byte"+"\n"+Character.SIZE+" bit\n");

        System.out.println("bool 1\t= "+f);
        System.out.println("Max\t= "+Boolean.TRUE);
        System.out.println("min\t= "+Boolean.FALSE);
        System.out.println(Boolean.TYPE);
    }
}
