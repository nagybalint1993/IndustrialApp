using System;
using System.Collections.Generic;
using System.Data.Entity;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IndustrialAppServer.Models;
using IndustrialAppServer.BLL.Database;
using IndustrialAppServer.BLL.Exceptions;

namespace IndustrialAppServer.BLL.Managers
{
    public class TypeManager
    {
        public void GenerateTestData()
        {
            using(var ctx= new TallboyDBContext())
            {
                if (!ctx.Types.Any())
                {
                    ctx.Types.AddRange(new List<IndustrialAppServer.Models.Type>
                    {
                        new IndustrialAppServer.Models.Type{Name= "Szimering", Description= "CORTECO 8,8/12,2"},
                        new IndustrialAppServer.Models.Type{Name= "Akkumulátor", Description= "Bosch"},
                        new IndustrialAppServer.Models.Type{Name= "Kerékcsapágy", Description= "FEBI Kúpgörgős csapágy"}
                    });
                    ctx.SaveChanges();
                }
            }
        }

        public IndustrialAppServer.Models.Type AddType(IndustrialAppServer.Models.Type type)
        {
            using (var ctx = new TallboyDBContext())
            {
                var newType= ctx.Types.Add(type);
                ctx.SaveChanges();
                return newType;
            }
        }

        public void DeleteType(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var type = ctx.Types.FirstOrDefault(t => t.Id == id);
                ctx.Types.Remove(type);
                ctx.SaveChanges();
            }
        }

        public void UpdateType(int id, IndustrialAppServer.Models.Type newType)
        {
            using (var ctx = new TallboyDBContext())
            {
                var type = ctx.Types.FirstOrDefault(f => f.Id == id);
                if (type == null || newType.Id != id)
                    throw new Exception();

                //ctx.Types.Attach(newType);
                //ctx.Entry(newType).State = EntityState.Modified;

                type.Name = newType.Name;
                type.Description = newType.Description;
                ctx.SaveChanges();
            }
        }

        public List<IndustrialAppServer.Models.Type> GetTypeList()
        {
            GenerateTestData();
            using (var ctx= new TallboyDBContext())
            {
                var types = ctx.Types.ToList();

                if (types == null) throw new TallboyServerException("Can't find any Type in the database.");

                return types;
            }
        }

        public IndustrialAppServer.Models.Type GetType(int id)
        {
            GenerateTestData();
            using (var ctx = new TallboyDBContext())
            {
                var types = ctx.Types.FirstOrDefault(t => t.Id == id);

                if (types == null)
                    throw new TallboyServerException("Can't find Type with the ID: " + id.ToString() +" in the database.");

                return types;
            }
        }
    }
}
