using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _36_2017_oktober_Valasztasok
{
    class Program
    {
        static string hetnapja(int honap, int nap)
        {
            string[] napnev = new string[] { "vasárnap", "hétfő", "kedd", "szerda", "csütörtök", 
                "péntek", "szombat" };
            int[] napszam = new int[] { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 335 };
            int napsorszam = (napszam[honap - 1] + nap) % 7;
            return napnev[napsorszam];
        }

        static void Main(string[] args)
        {

            string[] sorok = File.ReadAllLines("naplo.txt");
            List<Hianyzas> hianyzasok = new List<Hianyzas>();

            DateTime datum = new DateTime();
            foreach (string sor in sorok)
            {
                string[] adatok = sor.Split(' ');
                if (sor[0] == '#')
                {
                    datum = new DateTime(2017, int.Parse(adatok[1]), int.Parse(adatok[2]));
                }
                else
                {
                    Hianyzas hianyzas = new Hianyzas();
                    hianyzas.datum = datum;
                    hianyzas.nev = adatok[0] + " " + adatok[1];
                    hianyzas.orak = adatok[2];
                    hianyzasok.Add(hianyzas);
                }
            }
            Console.WriteLine("A fájl beolvasása megtörtént.");

            Console.WriteLine("\n2. feladat");
            Console.WriteLine("A naplóban {0} bejegyzés van.", hianyzasok.Count);

            Console.WriteLine("\n3. feladat");
            int igazoltakDb = 0;
            int igazolatlanokDb = 0;
            foreach (Hianyzas hianyzas in hianyzasok)
            {
                foreach (char ora in hianyzas.orak)
                {
                    if (ora == 'I') igazolatlanokDb++;
                    else if (ora == 'X') igazoltakDb++;
                }
            }
            Console.WriteLine("Az igazolt hiányzások száma {0}, az igazolatlanoké {1}.",
                igazoltakDb, igazolatlanokDb);

            Console.WriteLine("\n5. feladat");
            Console.Write("A hónap sorszáma: ");
            int honap = int.Parse(Console.ReadLine());
            Console.Write("A nap sorszáma: ");
            int nap = int.Parse(Console.ReadLine());
            Console.WriteLine("Azon a napon {0} volt.", hetnapja(honap, nap));

            Console.WriteLine("\n6. feladat");
            Console.Write("Nap neve: ");
            string napnev = Console.ReadLine();
            Console.Write("Az óra sorszáma: ");
            int oraSorszam = int.Parse(Console.ReadLine()) - 1;

            int hianyzasokDb = 0;
            foreach (Hianyzas hianyzas in hianyzasok)
            {
                if (hetnapja(hianyzas.datum.Month, hianyzas.datum.Day) == napnev)
                {
                    if (hianyzas.orak[oraSorszam] == 'I' || hianyzas.orak[oraSorszam] == 'X')
                        hianyzasokDb++;
                }
            }
            Console.WriteLine("Ekkor összesen {0} óra hiányzás történt.", hianyzasokDb);

            Console.WriteLine("\n7. feladat");
            Dictionary<string, int> osszHianyzasok = new Dictionary<string, int>();
            foreach (Hianyzas hianyzas in hianyzasok)
            {
                int aznapiHianyzas = 0;
                foreach (char ora in hianyzas.orak)
                {
                    if (ora == 'X' || ora == 'I')
                        aznapiHianyzas++;
                }

                if (!osszHianyzasok.ContainsKey(hianyzas.nev))
                    osszHianyzasok.Add(hianyzas.nev, aznapiHianyzas);
                else
                    osszHianyzasok[hianyzas.nev] += aznapiHianyzas;
            }

            int maxHianyzas = osszHianyzasok.Values.Max();
            Console.WriteLine();
            Console.WriteLine("A legtöbbet hiányzó tanulók: ");
            foreach (var osszHianyzas in osszHianyzasok)
            {
                if (osszHianyzas.Value == maxHianyzas)
                    Console.Write("{0} ", osszHianyzas.Key);
            }

            Console.ReadLine();
        }
    }
}
