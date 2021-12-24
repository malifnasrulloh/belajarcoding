import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
  
    public static void main(String[] args)
    {






        try {
            Process process= Runtime.getRuntime().exec("clear");
  
            StringBuilder output = new StringBuilder();
  
            BufferedReader reader
                = new BufferedReader(new InputStreamReader(process.getInputStream()));
  
            String line;
            while ((line = reader.readLine()) != null) {
                output.append(line+"\n");
                System.out.println(output);
            }
            
            // int exitVal = process.waitFor();
            // if (exitVal == 0) {
            //     System.out.println(
            //         "**************************** The Output is ******************************");
            //     System.exit(0);
            // }
        }
        catch (IOException e) {
            e.printStackTrace();
        }
        // catch (InterruptedException e) {
        //     e.printStackTrace();
        // }
    }
}