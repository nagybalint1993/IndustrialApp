using IndustrialAppServer.BLL.Database;
using IndustrialAppServer.BLL.Exceptions;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TallboyServer.BLL.Models;

namespace TallboyServer.BLL.Managers
{
    public class ImageManager
    {
        public Image AddImage(Image image)
        {
            using (var ctx = new TallboyDBContext())
            {
                var newImage = ctx.Images.Add(image);
                ctx.SaveChanges();
                return newImage;
            }
        }

        public Image AddImage(string filePath)
        {
            using(var ctx= new TallboyDBContext())
            {
                Image image = new Image() { Path = filePath };
                var newImage= ctx.Images.Add(image);
                ctx.SaveChanges();
                return newImage;
            }
        }

        public Image DeleteImage(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var newImage = ctx.Images.FirstOrDefault(t => t.Id == id);
                ctx.Images.Remove(newImage);
                ctx.SaveChanges();
                return newImage;
            }
        }

        public Image UpdateImage(int id, Image newImage)
        {
            using (var ctx = new TallboyDBContext())
            {
                var image = ctx.Images.FirstOrDefault(f => f.Id == id);
                if (image == null || newImage.Id != id)
                    throw new Exception();

                //ctx.Types.Attach(newType);
                //ctx.Entry(newType).State = EntityState.Modified;

                image.Path = newImage.Path;
                ctx.SaveChanges();

                return image;
            }
        }


        public Image GetImage(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var image = ctx.Images.FirstOrDefault(t => t.Id == id);
                return image;
            }
        }
    }
}
