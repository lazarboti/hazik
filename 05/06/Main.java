import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Student {
    public String nev;
    public String szak;
    public int kor;

    public Student(String nev, String szak, int kor) {
        this.nev = nev;
        this.szak = szak;
        this.kor = kor;
    }

    
    public String toString() {
        return "Név: " + nev + ", Szak: " + szak + ", Kor: " + kor;
    }
}

public class Main {
    public static void main(String[] args) {
        String fname = "tanulok.csv"; // Fájl neve
        List<String> sorok = FileUtils.readLines(fname); // Fájl sorainak beolvasása

        // Létrehozunk egy listát a diákok számára
        List<Student> tanulok = new ArrayList<>();
        // Létrehozunk egy listát a nevek számára
        List<String> nevek = new ArrayList<>();

        // Bejárjuk a sorokat és feldolgozzuk őket
        for (String sor : sorok) {
            String[] tomb = sor.split(","); // Feldaraboljuk a sort vessző alapján
            if (tomb.length == 3) { // Ellenőrizzük, hogy három adat van-e
                String nev = tomb[0];
                String szak = tomb[2];
                int kor = Integer.parseInt(tomb[1]);

                // Létrehozzuk a diák objektumot és hozzáadjuk a listához
                Student tanulo = new Student(nev, szak, kor);
                tanulok.add(tanulo);

                // Hozzáadjuk a nevet a nevek listájához
                nevek.add(nev);
            }
        }

        // Nevek rendezése ABC sorrendbe
        Collections.sort(nevek);

        // Rendezett nevek kiíratása
        for (String nev : nevek) {
            System.out.println(nev);
        }
        for (Student tanulo : tanulok) {
            System.out.println(tanulo);
        }
    }
}