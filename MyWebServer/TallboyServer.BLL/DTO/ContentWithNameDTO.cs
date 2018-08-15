using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TallboyServer.BLL.DTO
{
    public class ContentWithNameDTO
    {
        public int id { get; set; }
        public string TypeName { get; set; }
        public int TypeId { get; set; }
        public int ContainerPartId { get; set; }
        public int Amount { get; set; }
    }
}
