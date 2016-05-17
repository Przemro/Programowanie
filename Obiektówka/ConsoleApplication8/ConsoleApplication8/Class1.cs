using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication8
{
    class Task
    {
        int[] tab = new int[10];
        int a, b;
        char z;

        void insert()
        {
            tab[a] = b;
        }
        int plus()
        {
            return tab[a] + tab[b];
        }
        int minus()
        {
            return tab[a] - tab[b];
        }
        int multiply()
        {
            return tab[a] * tab[b];
        }
        int divide()
        {
            try 
            {
                return tab[a] / tab[b];
            }
            catch (Exception)
            {
                Console.WriteLine("Dzielnie przez 0 jest niemożliwe!!");
                return 0;
            }
        }
        bool read(string row)
        {
            bool ok = true;
            try
            {
                string[] ntab = row.Split(' ');
                z = (char)ntab[0][0];
                a = int.Parse(ntab[1]);
                b = int.Parse(ntab[2]);
            }
            catch (Exception)
            {
                ok = false;
            }
            return ok;
        }
        public bool exe()
        {
            bool ok = read(Console.ReadLine());
            if (ok)
                switch (z)
                {
                    case 'z': insert(); break;
                    case '+': Console.WriteLine(plus()); break;
                    case '-': Console.WriteLine(minus()); break;
                    case '*': Console.WriteLine(multiply()); break;
                    case '/': Console.WriteLine(divide()); break;
                    default: break;
                }
            return ok;

        }
    }
}
