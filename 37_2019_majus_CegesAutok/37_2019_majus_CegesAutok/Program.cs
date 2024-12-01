using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace _37_2019_majus_CegesAutok
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] sorok = File.ReadAllLines("autok.txt");
            List<Auto> autok = new List<Auto>();
            foreach (string sor in sorok)
            {
                string[] adatok = sor.Split(' ');
                Auto auto = new Auto();
                int ora = int.Parse(adatok[1].Substring(0, 2));
                int perc = int.Parse(adatok[1].Substring(3, 2));
                auto.datum = new DateTime(2019, 5, int.Parse(adatok[0]), ora, perc, 0);
                auto.rendszam = adatok[2];
                auto.azonosito = int.Parse(adatok[3]);
                auto.km = int.Parse(adatok[4]);
                //if (adatok[5] == "1")
                //{
                //    auto.befele = true;
                //}
                //else
                //{
                //    auto.befele = false;
                //}
                auto.befele = adatok[5] == "1";
                autok.Add(auto);
            }

            Console.WriteLine("2. feladat");
            for (int i = autok.Count - 1; i >= 0; i--)
            {
                if (autok[i].befele == false)
                {
                    Console.WriteLine("{0}. nap rendszám: {1}", autok[i].datum.Day, autok[i].rendszam);
                    break;
                }
            }

            Console.WriteLine("\n3. feladat");
            Console.Write("Nap: ");
            int nap = int.Parse(Console.ReadLine());
            Console.WriteLine("Forgalom a(z) {0}. napon:", nap);
            foreach (Auto auto in autok)
            {
                if (auto.datum.Day == nap)
                {
                    Console.WriteLine("{0} {1} {2} {3}",
                        auto.datum.ToString("HH:mm"), auto.rendszam, auto.azonosito,
                        auto.befele ? "be" : "ki");
                }
            }

            Console.WriteLine("\n4. feladat");
            ////1. megoldás
            //Dictionary<string, bool> holVannak = new Dictionary<string, bool>();
            //foreach (Auto auto in autok)
            //{
            //    if (!holVannak.Keys.Contains(auto.rendszam))
            //    {
            //        holVannak.Add(auto.rendszam, auto.befele);
            //    }
            //    else
            //    {
            //        holVannak[auto.rendszam] = auto.befele;
            //    }
            //}

            //int kintVannakDb = 0;
            //foreach (var auto in holVannak)
            //{
            //    if (!auto.Value)
            //        kintVannakDb++;
            //}
            //Console.WriteLine("A hónap végén {0} autót nem hoztak vissza.", kintVannakDb);

            ////2. megoldás
            //int kintVannakDb = 0;
            //for (int i = 0; i < 10; i++)
            //{
            //    string rendszam = string.Format("CEG30{0}", i);
            //    for (int j = autok.Count - 1; j >= 0; j--)
            //    {
            //        if (autok[j].rendszam == rendszam)
            //        {
            //            if (!autok[j].befele)
            //                kintVannakDb++;
            //            break;
            //        }
            //    }
            //}
            //Console.WriteLine("A hónap végén {0} autót nem hoztak vissza.", kintVannakDb);

            //3. megoldas
            List<string> rendszamok = new List<string>();
            foreach (Auto auto in autok)
            {
                if (!rendszamok.Contains(auto.rendszam))
                    rendszamok.Add(auto.rendszam);
            }
            rendszamok.Sort();

            int kintVannakDb = 0;
            foreach (string rendszam in rendszamok)
            {
                for (int i = autok.Count - 1; i >= 0; i--)
                {
                    if (autok[i].rendszam == rendszam)
                    {
                        if (!autok[i].befele)
                            kintVannakDb++;
                        break;
                    }
                }
            }
            Console.WriteLine("A hónap végén {0} autót nem hoztak vissza.", kintVannakDb);

            Console.WriteLine("\n5.feladat");
            Dictionary<string, int> megtettKmek = new Dictionary<string, int>();
            for (int i = autok.Count - 1; i >= 0; i--)
            {
                if (!megtettKmek.Keys.Contains(autok[i].rendszam))
                {
                    megtettKmek.Add(autok[i].rendszam, autok[i].km);
                }
            }
            foreach (string rendszam in rendszamok)
            {
                foreach (Auto auto in autok)
                {
                    if (auto.rendszam == rendszam)
                    {
                        megtettKmek[rendszam] -= auto.km;
                        Console.WriteLine("{0} {1} km", rendszam, megtettKmek[rendszam]);
                        break;
                    }
                }
            }

            Console.WriteLine("\n6. feladat:");
            Auto legtobbetMent = new Auto();
            int maxKm = 0;
            foreach (string rendszam in rendszamok)
            {
                int km = 0;
                foreach (Auto auto in autok)
                {
                    if (auto.rendszam == rendszam)
                    {
                        if (!auto.befele)
                            km = auto.km;
                        else
                        {
                            km = auto.km - km;
                            if (km > maxKm)
                            {
                                legtobbetMent = auto;
                                maxKm = km;
                            }
                        }
                    }
                }
            }
            Console.WriteLine("Leghosszabb út: {0} km, személy: {1}", maxKm, legtobbetMent.azonosito);

            Console.WriteLine("\n7. feladat:");
            Console.Write("Rendszám: ");
            string rendsz = Console.ReadLine();

            StreamWriter sw = new StreamWriter(rendsz + "_menetlevel.txt");
            foreach (Auto auto in autok)
            {
                if (auto.rendszam == rendsz)
                {
                    if (!auto.befele)
                        sw.Write("{0}", auto.azonosito);

                    sw.Write("\t{0}\t{1} km", auto.datum.ToString("dd. HH:mm"), auto.km);

                    if (auto.befele)
                        sw.WriteLine();
                }
            }
            sw.Close();
            Console.WriteLine("Menetlevél kész.");

            Console.ReadLine();
        }
    }
}
