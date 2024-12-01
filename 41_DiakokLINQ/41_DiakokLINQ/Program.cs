using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _41_DiakokLINQ
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] sorok = File.ReadAllLines("diakok.csv", Encoding.Default);
            List<Diak> diakok = new List<Diak>();
            for (int i = 1; i < sorok.Length; i++)
            {
                string sor = sorok[i];
                string[] adatok = sor.Split(';');
                Diak diak = new Diak();
                diak.nev = adatok[0];
                diak.szulDatum = new DateTime(int.Parse(adatok[1]),
                                              int.Parse(adatok[2]),
                                              int.Parse(adatok[3]));
                diak.varos = adatok[4];
                diak.ferfi = adatok[5] == "Igen";
                diak.atlag = double.Parse(adatok[6]);
                diakok.Add(diak);
            }

            foreach (Diak d in diakok)
            {
                if (d.varos == "Eger")
                    Console.WriteLine(d);
            }


            Console.WriteLine("Egri diákok");
            //v.1.0
            //List<Diak> egriDiakok = new List<Diak>();
            //foreach (Diak diak in diakok)
            //{
            //    if (diak.varos == "Eger")
            //        egriDiakok.Add(diak);
            //}

            //v.1.1
            //List<Diak> egriDiakok = diakok.Where(d => d.varos == "Eger").ToList();
            //foreach (Diak diak in egriDiakok)
            //{
            //    Console.WriteLine(diak);
            //}

            //v.2.0
            foreach (Diak diak in diakok.Where(d => d.varos == "Eger"))
            {
                Console.WriteLine(diak);
            }

            Console.WriteLine("\n1995 előtt született egri, vagy pécsi férfiak:");
            foreach (Diak diak in diakok.Where(d => d.szulDatum.Year < 1995)
                                        .Where(d => d.varos == "Eger" ||d.varos == "Pécs")
                                        .Where(d => d.ferfi))
            {
                Console.WriteLine(diak);
            }

            Console.WriteLine("\n1995 előtt született egri, vagy pécsi férfiak:");
            foreach (Diak diak in diakok.Where(d => d.szulDatum.Year < 1995 && 
                                                    (d.varos == "Eger" || d.varos == "Pécs") &&
                                                    d.ferfi))
            {
                Console.WriteLine(diak);
            }

            Console.WriteLine("\n1995 előtt született egri, vagy pécsi férfiak névsorrendben:");
            foreach (Diak diak in diakok.Where(d => d.szulDatum.Year < 1995 &&
                                                    (d.varos == "Eger" || d.varos == "Pécs") &&
                                                    d.ferfi)
                                        .OrderBy(d => d.nev))
            {
                Console.WriteLine(diak);
            }

            Console.WriteLine("\nA diákok átlaga: {0}", diakok.Average(d => d.atlag));
            Console.WriteLine("\nA legalacsonyabb átlag: {0}", diakok.Min(d => d.atlag));

            Console.WriteLine("\nA legfiatalabb diák: ");
            DateTime legkesobbiDatum = diakok.Max(d => d.szulDatum);
            Diak legfiatalabb = diakok.Where(d => d.szulDatum == legkesobbiDatum).First();
            Console.WriteLine(legfiatalabb);

            Console.WriteLine("\nNem fővárosi lányok száma: {0}",
                diakok.Count(d => d.varos != "Budapest" && !d.ferfi));

            Console.WriteLine("\nVan-e balassagyarmati diák? {0}",
                diakok.Any(d => d.varos == "Balassagyarmat") ? "Igen" : "Nem");

            Console.WriteLine("\nA három legidősebb diák:");
            foreach (Diak diak in diakok.OrderBy(d => d.szulDatum).Take(3))
            {
                Console.WriteLine(diak);
            }
            Console.WriteLine("\nAz öt legfiatalabb diák:");
            foreach (Diak diak in diakok.OrderByDescending(d => d.szulDatum).Take(5))
            {
                Console.WriteLine(diak);
            }

            Console.ReadLine();
        }
    }
}
