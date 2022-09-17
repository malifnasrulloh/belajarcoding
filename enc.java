import java.lang.invoke.MethodHandles.Lookup;
import java.util.Random;

public class enc{
    static String[] ascii={"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
    static StringBuilder temp;

    public static void main(String[] args) {
        
        if(args[0].equals("-e")){
            temp=new StringBuilder(args[1]);
            for(int i=0;i<args[1].length();i++){
                temp=temp.replace(i, i+1, ascii[temp.hashCode()%(temp.substring(i).hashCode()%62)]);
            }
        }
        Integer a=temp.hashCode();
        System.out.println(Integer.toBinaryString(a));
        System.out.println(args[1].hashCode());
        System.out.println(temp);
    }
}