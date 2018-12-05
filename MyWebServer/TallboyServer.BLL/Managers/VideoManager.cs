using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IndustrialAppServer.BLL.Database;
using IndustrialAppServer.BLL.Models;

namespace IndustrialAppServer.BLL.Managers
{
    public class VideoManager
    {
        public Video AddVideo(String name)
        {
            using(var ctx= new TallboyDBContext())
            {
                var url = createUrlFromName(name);
                Video video = new Video() { name = name, url= url };
                var newVid= ctx.Videos.Add(video);

                return newVid;
            }
        }

        private string createUrlFromName(string name)
        {
            string[] parts= name.Split('.');
            string url = parts[parts.Length - 1] + "/" ;
            for(int i=0; i< parts.Length-1; i++)
            {
                url += parts[i];
            }

            return url;
        }
    }
}
