using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;

namespace IndustrialApp.Network.Providers
{
public class AppProvider<T>
{
    private string serviceEndpoint;

    public AppProvider(string endpoint)
    {
        serviceEndpoint = endpoint;
    }
    public async void GetAsync(Action<T> callback)
    {
        //Create an HTTP client object
        HttpClient httpClient = new HttpClient();

        //Add a user-agent header to the GET request. 
        var headers = httpClient.DefaultRequestHeaders;

        Uri requestUri = new Uri(NetworkSettings.ApiURL +
            "/" + serviceEndpoint);

        //Send the GET request asynchronously and retrieve the response as a string.
        HttpResponseMessage httpResponse = new HttpResponseMessage();
        string httpResponseBody = "";
        T type ;

        try
        {
            //Send the GET request
            httpResponse = await httpClient.GetAsync(requestUri);
            httpResponse.EnsureSuccessStatusCode();
            httpResponseBody = 
                    await httpResponse.Content.ReadAsStringAsync();
        }
        catch (Exception ex)
        {
            httpResponseBody = "Error: " + ex.HResult.ToString("X") + " Message: " + ex.Message;
        }
        type = JsonConvert.DeserializeObject<T>(httpResponseBody);
        callback(type);
    }

        public async Task<List<T>> GetListAsync(Action<List<T>> callback)
        {
            //Create an HTTP client object
            HttpClient httpClient = new HttpClient();

            //Add a user-agent header to the GET request. 
            var headers = httpClient.DefaultRequestHeaders;
            Uri requestUri = new Uri(NetworkSettings.ApiURL + "/" + serviceEndpoint);

            //Send the GET request asynchronously and retrieve the response as a string.
            HttpResponseMessage httpResponse = new HttpResponseMessage();
            string httpResponseBody = "";
            List<T> list = null;

            try
            {
                //Send the GET request
                httpResponse = await httpClient.GetAsync(requestUri);
                httpResponse.EnsureSuccessStatusCode();
                httpResponseBody = await httpResponse.Content.ReadAsStringAsync();
            }
            catch (Exception ex)
            {
                httpResponseBody = "Error: " + ex.HResult.ToString("X") + " Message: " + ex.Message;
            }
            list = JsonConvert.DeserializeObject<List<T>>(httpResponseBody);

            //Callback
            callback(list);
            return list;
        }


    }
}
