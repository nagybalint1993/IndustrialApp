﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TallboyServer.BLL.DTO
{
    public class StepWithName
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public string Description { get; set; }
        public int Order { get; set; }
        public int TaskId { get; set; }
        public int TypeId { get; set; }
        public string TypeName { get; set; }
    }
}