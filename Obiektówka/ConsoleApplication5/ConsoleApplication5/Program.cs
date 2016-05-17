using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication5
{
    class Program
    {
        static void Main(string[] args)
        {
            ConsoleKeyInfo klawisz;
            Licznik ln = new Licznik();
            Console.WriteLine(" Licznik");
            Console.WriteLine(" + zwiększ o 1");
            Console.WriteLine(" - zmienjsz o 1");
            Console.WriteLine(" 0 zeruj");
            Console.WriteLine(" k koniec");
            Console.WriteLine(" wciśniej odpowiedni klawisz");
            Console.Write("Wartość: {0} \r", ln.zero());
            do
            {
                klawisz = Console.ReadKey(true);
                if (klawisz.KeyChar=='+')   Console.Write("Wartość: {0} \r", ln.plus());
                if (klawisz.KeyChar=='-')   Console.Write("Wartość: {0} \r", ln.minus());
                if (klawisz.KeyChar=='0')   Console.Write("Wartość: {0} \r", ln.zero());
            } 
            while (klawisz.KeyChar != 'k');
        }
    }
}
