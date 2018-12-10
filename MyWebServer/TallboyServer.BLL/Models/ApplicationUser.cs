using Microsoft.AspNet.Identity.EntityFramework;
using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IndustrialAppServer.BLL.Models
{
    public class ApplicationUser: IdentityUser
    {
        [Required]
        public string Name { get; set; }

        [Key]
        [Required]
        public string QRstring { get; set; }
    }
}
