using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _41_DiakokLINQ
{
    class Diak
    {
        public string nev;
        public DateTime szulDatum;
        public bool ferfi;
        public string varos;
        public double atlag;

        public override string ToString()
        {
            return string.Format("{0}\t{1}\t{2}\t{3}\t{4}",
                nev,
                szulDatum.ToString("yyyy.MM.dd"),
                atlag,
                ferfi ? "ferfi" : "nő",
                varos);
        }
    }
}
