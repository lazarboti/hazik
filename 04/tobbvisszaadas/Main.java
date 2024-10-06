import java.util.ArrayList;
import java.util.List;

class MyUtils
{
    public int min =100;
    public int max = 0;
    public static int[] MinOMax(int[] tomb)
    {
        int[] result = {100,0};
        for(int i =0; i< tomb.length;i++)
        {
            if (result[0]>tomb[i]) {
                result[0] = tomb[i];
            }
            if (result[1]<tomb[i]) {
                result[1] = tomb[i];
            }
        }

        return result;
    }
    public static List<Integer> MinOMax2(int[] tomb)
    {
        List<Integer> result = new ArrayList<>();
        int max = 0;
        int min = 100;
        for(int i =0; i< tomb.length;i++)
        {
            if (min>tomb[i]) {
                min = tomb[i];
            }
            if (max<tomb[i]) {
                max = tomb[i];
            }
        }
        result.add(min);
        result.add(max);
        return result;
    }
    public static MyUtils MinOMax1(int[] tomb)
    {
        MyUtils szamos = new MyUtils();
        int max = 0;
        int min = 100;
        for(int i =0; i< tomb.length;i++)
        {
            if (min>tomb[i]) {
                min = tomb[i];
            }
            if (max<tomb[i]) {
                max = tomb[i];
            }
        }
        szamos.max = max;
        szamos.min= min; 
        return  szamos;
    }

}

public class Main
{
    public static void main(String[] args)
    {
        int[] tomb = {2,4,54,21,73,21,33,44,5,34};
        int[] result = MyUtils.MinOMax(tomb);
        for(int i =0; i< result.length;i++)
        {
            
            System.out.print(result[i]);
            System.out.print(",");

        }
        System.out.printf("\n");
        List<Integer> result1 = new ArrayList<>();
         result1 = MyUtils.MinOMax2(tomb);
         System.out.println(result1);
         MyUtils szamos = new MyUtils();
         szamos = MyUtils.MinOMax1(tomb);
         System.out.print(szamos.min);
         System.out.print(',');
         System.out.print(szamos.max);

    }
}