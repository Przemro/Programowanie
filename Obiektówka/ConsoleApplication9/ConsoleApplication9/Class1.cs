using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication9
{
    class Instrument
    {
        public virtual void WydajDziwiek()
        {
            Console.WriteLine("Nieokreślony brzdęk");
        }
    }
    class Trabka : Instrument
    {
        public override void WydajDziwiek()
        {
            Console.WriteLine("Tra-ta-ta!");
        }
    }
    class Bemben : Instrument
    {
        public override void WydajDziwiek()
        {
            Console.WriteLine("Bum-bum-bum!");
        }
    }
    class Fortepian : Instrument
    {
        public override void WydajDziwiek()
        {
            Console.WriteLine("Ding!");
        }
    }
}
