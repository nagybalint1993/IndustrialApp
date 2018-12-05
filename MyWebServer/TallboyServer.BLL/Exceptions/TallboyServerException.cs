using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IndustrialAppServer.BLL.Exceptions
{
    class TallboyServerException : Exception
    {
        public TallboyServerException(string message) : base(message)
        {
        }
    }
}
