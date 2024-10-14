import java.util.List;

class Passwords {
    private Passwords() {

    }

    public static boolean strong(String s) {
        boolean eredmeny = false;
        int kisbetu = 0;
        int nagybetu = 0;
        int szam = 0;
        int specKarakter = 0;
        for (int i = 0; i < s.length(); i++) {
            char betu = s.charAt(i);
            if (Character.isLowerCase(betu)) {
                kisbetu++;
            } else if (Character.isUpperCase(betu)) {
                nagybetu++;
            } else if (Character.isDigit(betu)) {
                szam++;
            } else if (!Character.isLetterOrDigit(betu)) {
                specKarakter++;
            }
            if (kisbetu > 0 && nagybetu > 0 && szam > 1 && specKarakter > 0) {
                eredmeny = true;
            }
        }

        return eredmeny;
    }
}

public class Main {
    public static void main(String[] args) {
        String fname = "Passwords.txt";
        List<String> sorok = FileUtils.readLines(fname);
        int counter = 0;
        for (String sor : sorok) {
            boolean megfelet = Passwords.strong(sor);
            if(megfelet == true)
            {
                counter++;
            }
        }
        System.out.println(counter);
    }
}