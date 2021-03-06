﻿using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Net.Http;
using System.Runtime.Serialization.Json;
using System.Text;
using System.Threading.Tasks;

namespace TallboyBLL.Controllers
{
    public class TypeController
    {
        private const string actionName = "types";
        DataContractJsonSerializer serializer;


        public TypeController()
        {
            serializer = new DataContractJsonSerializer(typeof(Models.Type));
        }

        public void TryToGetType(int id)
        {
            GetTypeAsync(id);
        }

        public async Task<TallboyBLL.Models.Type> GetTypeAsync(int typeId)
        {
            //Create an HTTP client object
            HttpClient httpClient = new HttpClient();

            //Add a user-agent header to the GET request. 
            var headers = httpClient.DefaultRequestHeaders;

            Uri requestUri = new Uri(NetworkSettings.ApiURL + "/" + actionName + "/" + typeId.ToString());

            //Send the GET request asynchronously and retrieve the response as a string.
            HttpResponseMessage httpResponse = new HttpResponseMessage();
            string httpResponseBody = "";
            TallboyBLL.Models.Type type= null;

            try
            {
                //Send the GET request
                httpResponse = await httpClient.GetAsync(requestUri);
                httpResponse.EnsureSuccessStatusCode();
                httpResponseBody = await httpResponse.Content.ReadAsStringAsync();
                type = JsonConvert.DeserializeObject<Models.Type>(httpResponseBody);
            }
            catch (Exception ex)
            {
                httpResponseBody = "Error: " + ex.HResult.ToString("X") + " Message: " + ex.Message;
            }
            return type;
        }
    }
}
