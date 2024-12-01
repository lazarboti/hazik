using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _40_DolgozatLego
{
    class Program
    {
        static void Main(string[] args)
        {
            //int a;
            //Console.Write("a = ");
            //if (int.TryParse(Console.ReadLine(), out a))
            //{

            //}

            string[] sorok = File.ReadAllLines("lego.txt");
            List<Lego> keszletek = new List<Lego>();
            for (int i = 1; i < sorok.Length; i++)
            {
                string[] adatok = sorok[i].Split(';');
                Lego lego = new Lego();
                lego.minEletkor = int.Parse(adatok[0]);
                lego.ar = int.Parse(adatok[1]);
                lego.sorozatszam = adatok[2];
                lego.kategoria = adatok[3];
                lego.elemekDb = int.Parse(adatok[4]);
                lego.keszletenDb = int.Parse(adatok[5]);
                keszletek.Add(lego);
            }
            Console.WriteLine("A fájl beolvasása megtörtént.");

            Console.WriteLine("\n2. feladat");
            int raktaronDb = 0;
            foreach (Lego lego in keszletek)
            {
                raktaronDb += lego.keszletenDb;
            }
            Console.WriteLine("Az áruházban {0} féle készlet található.", keszletek.Count);
            Console.WriteLine("Jelenleg összesen {0} doboz Lego van raktáron.", raktaronDb);

            Console.WriteLine("\n3. feladat");
            Lego legolcsobb = keszletek.First();
            Lego legdragabb = keszletek.First();
            foreach (Lego keszlet in keszletek)
            {
                if (keszlet.ar < legolcsobb.ar)
                    legolcsobb = keszlet;
                if (keszlet.ar > legdragabb.ar)
                    legdragabb = keszlet;
            }
            Console.WriteLine("Legolcsóbb készlet: {0} - {1}: {2} Ft",
                legolcsobb.sorozatszam, legolcsobb.kategoria, legolcsobb.ar);
            Console.WriteLine("Legdrágább készlet: {0} - {1}: {2} Ft",
                legdragabb.sorozatszam, legdragabb.kategoria, legdragabb.ar);

            Console.WriteLine("\n4. feladat");
            Console.Write("Életkor: ");
            int eletkor = int.Parse(Console.ReadLine());
            Console.Write("Kategória: ");
            string kategoria = Console.ReadLine();
            foreach (Lego keszlet in keszletek)
            {
                if (keszlet.keszletenDb > 0 && keszlet.minEletkor <= eletkor && keszlet.kategoria == kategoria)
                {
                    Console.WriteLine("{0} - {1} Ft ({2} év)",
                        keszlet.sorozatszam, keszlet.ar, keszlet.minEletkor);
                }
            }

            Console.WriteLine("\n5. feladat");
            int penz = 0;
            foreach (Lego keszlet in keszletek)
            {
                if (keszlet.keszletenDb < 5)
                {
                    penz += (5 - keszlet.keszletenDb) * keszlet.ar;
                }
            }
            Console.WriteLine("A raktár feltöltése {0} Ft-ba kerülne.", penz);

            Console.WriteLine("\n6. feladat");
            Dictionary<string, int> raktaronKategoriankent = new Dictionary<string, int>();
            foreach (Lego keszlet in keszletek)
            {
                if (!raktaronKategoriankent.ContainsKey(keszlet.kategoria))
                    raktaronKategoriankent.Add(keszlet.kategoria, keszlet.keszletenDb);
                else raktaronKategoriankent[keszlet.kategoria] += keszlet.keszletenDb;
            }
            int maxKeszletenDb = raktaronKategoriankent.Values.Max();
            kategoria = "";
            foreach (var raktaron in raktaronKategoriankent)
            {
                if (raktaron.Value == maxKeszletenDb)
                    kategoria = raktaron.Key;
            }
            Console.WriteLine("A legtöbb doboz ({0} db) a {1} kategóriába tartozik.",
                maxKeszletenDb, kategoria);
            foreach (Lego keszlet in keszletek)
            {
                if (keszlet.kategoria == kategoria)
                    Console.WriteLine("{0} - {1} Ft ({2} db)",
                        keszlet.sorozatszam, keszlet.ar, keszlet.keszletenDb);
            }

            Console.WriteLine("\n7. feladat:");
            //Dictionary<string, int> legdragabbak = new Dictionary<string, int>();
            //foreach (Lego lego in keszletek)
            //{
            //    if (!legdragabbak.ContainsKey(lego.kategoria))
            //        legdragabbak.Add(lego.kategoria, lego.ar);
            //    else
            //    {
            //        if (lego.ar > legdragabbak[lego.kategoria])
            //            legdragabbak[lego.kategoria] = lego.ar;
            //    }
            //}
            //foreach (var legD in legdragabbak)
            //{
            //    foreach (Lego lego in keszletek)
            //    {
            //        if (lego.kategoria == legD.Key && lego.ar == legD.Value)
            //            Console.WriteLine("{0}: {1} ({2})",
            //                lego.kategoria,
            //                lego.sorozatszam,
            //                lego.ar);
            //    }
            //}

            Dictionary<string, Lego> legdragabbak = new Dictionary<string, Lego>();
            foreach (Lego lego in keszletek)
            {
                if (!legdragabbak.ContainsKey(lego.kategoria))
                    legdragabbak.Add(lego.kategoria, lego);
                else
                {
                    if (lego.ar > legdragabbak[lego.kategoria].ar)
                        legdragabbak[lego.kategoria] = lego;
                }
            }
            foreach (var legD in legdragabbak)
            {
                Console.WriteLine("{0}: {1} ({2})",
                    legD.Value.kategoria,
                    legD.Value.sorozatszam,
                    legD.Value.ar);
            }

            Console.ReadLine();
        }
    }
}
