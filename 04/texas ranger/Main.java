import java.util.ArrayList;
import java.util.List;

class PyUtils
{
    private PyUtils()
    {

    }
    public static void range(int end)
    {
        range(0, end,1);

    }
    
    public static void range(int start, int end)
    {
        range(start, end,1);

    }


    public static void range(int start, int end , int step)
    {
        List<Integer> szamok = new ArrayList<>();
        for (int  i= start; i < end; i=i+step)
        {
            szamok.add(i);
            
        }   
        System.err.println(szamok);

    }

}


public class Main {
    public static void main(String[] args)
    {
        PyUtils.range(0, 5);       //[0, 1, 2, 3, 4]
        // alsó limit: 0; felső limit: 5; alsó limit benne van az eredményben, míg a felső limit nincs benne

        PyUtils.range(3, 7);    //->    [3, 4, 5, 6]
        PyUtils.range(3, 4);    //->    [3]
        PyUtils.range(3, 3);    //->    []
        // a 3-tól indulunk de a 3 már nem lesz benne, így ez egy üres lista lesz

        PyUtils.range(10);    //->    [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
        // ez a felső limit lesz. Ekkor az alsó limit alapértelmezetten 0 lesz.

        PyUtils.range(1);   //->    [0]
        PyUtils.range(0);    //->    []
        PyUtils.range(-4);   //->    []

        PyUtils.range(4, 20, 2);   // ->    [4, 6, 8, 10, 12, 14, 16, 18]
        // indulunk 4-ről; a 20 már nincs benne; lépésköz: 2, azaz vesszük minden második elemet

        PyUtils.range(4, 10, 1);   //->    [4, 5, 6, 7, 8, 9]
        PyUtils.range(10, 4, 1);  // ->    []

    }
}