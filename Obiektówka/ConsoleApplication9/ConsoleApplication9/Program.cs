using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication9
{
    class Program
    {
        static void Main(string[] args)
        {
            Instrument ins;
            Console.WriteLine("Wybierz instrument\n 1-nieokreslony\n 2-trąbka\n 3-bęben\n 4-fortepian\n k-koniec");
            ConsoleKeyInfo kl;
            do
            {
                kl = Console.ReadKey();
                switch (kl.KeyChar)
                {
                    case '1': ins= new Instrument(); break;
                    case '2': ins= new Trabka(); break;
                    case '3': ins= new Bemben(); break;
                    case '4': ins= new Fortepian(); break;
                    default: ins = null; break;
                }
                if (ins != null) ins.WydajDziwiek();
                else Console.WriteLine("Nie wybrano instrumentu");
            }while (kl.KeyChar =='k');
            Console.ReadKey();
        }
    }
}
