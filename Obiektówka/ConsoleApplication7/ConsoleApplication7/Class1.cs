using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication7
{
    class Temperatura
    {
        float c;

        public float C 
        { 
            get { return c; }
            set { c = value; }
        }
        public float K 
        { 
            get { return c + (float)273.15; }
            set { c = value - (float)273.15; }
        }
        public float F 
        { 
            get { return (float)9 / 5 * c + 32; }
            set { c = (float)9 / 5 * (value - 32); }
        }
    }
}
