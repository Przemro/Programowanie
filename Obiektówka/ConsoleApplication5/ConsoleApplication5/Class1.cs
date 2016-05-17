using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication5
{
    class Licznik
    {
        char wartosc='A';

        public char zero()
        {
            return wartosc = 'A';
        }
        public char plus()
        {
            return wartosc == 'Z' ? 'A' : ++wartosc;
        }
        public char minus()
        {
            return wartosc == 'Z' ? 'A' : --wartosc;
        }
    }
}
