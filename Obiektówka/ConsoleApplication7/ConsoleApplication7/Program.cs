using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication7
{
    class Program
    {
        static void Main(string[] args)
        {
            Temperatura t = new Temperatura();
            Console.Write("C=");
            t.C = float.Parse(Console.ReadLine());
            Console.WriteLine("K={0}", t.K);
            Console.WriteLine("F={0}", t.F);

            Console.Write("K=");
            t.K = float.Parse(Console.ReadLine());
            Console.WriteLine("C={0}", t.C);
            Console.WriteLine("F={0}", t.F);

            Console.Write("F=");
            t.F = float.Parse(Console.ReadLine());
            Console.WriteLine("K={0}", t.K);
            Console.WriteLine("C={0}", t.C);
            Console.ReadKey();
        }
    }
}
