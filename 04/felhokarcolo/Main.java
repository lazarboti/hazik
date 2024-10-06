import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {

        String szam = "179769313486231590772930519078902473361797697894230657273430081157732675805500963132708477322407536021120113879871393357658789768814416622492847430639474124377767893424865485276302219601246094119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137216";
        List<Integer> szamok = new ArrayList<>();
        for (int i = 0; i < szam.length(); i++) {
            String elem = szam.substring(i, i + 1);
            int x = Integer.parseInt(elem);
            szamok.add(x);

        }
        int osszeg = 0;
        for (int i = 0; i < szamok.size() - 1; i++) {
            if (szamok.get(i) < szamok.get(i + 1)) {
                osszeg += szamok.get(i + 1) - szamok.get(i);
            } else if (szamok.get(i) > szamok.get(i + 1)) {
                osszeg += szamok.get(i) - szamok.get(i + 1);
            }
        }
        System.out.println(osszeg);
    }

}