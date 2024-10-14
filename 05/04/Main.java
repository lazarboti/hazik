import java.util.List;

public class Main
{
    public static void main(String[] args) {
        String fname = "mozik.csv" ;
        int counter = 0;
        int SzavazottFilm = 0;
        List<String> sorok = FileUtils.readLines(fname);
        for(String sor:sorok)
        {
            counter++;
            String[] tomb=sor.split(";");
            int szavazatok = Integer.parseInt(tomb[2]);
            if (szavazatok >= 500000) {
                SzavazottFilm++;
                
            }
        }
        System.out.println(counter);
        System.out.println(SzavazottFilm);
        
    }
}