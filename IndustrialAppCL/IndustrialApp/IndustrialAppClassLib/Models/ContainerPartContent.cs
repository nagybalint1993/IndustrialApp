﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace IndustrialApp.Models
{
    public class ContainerPartContent
    {
        public int Id { get; set; }

        public int ContainerPartId { get; set; }

        public int TypeId { get; set; }

        public int Amount { get; set; }
    }
}