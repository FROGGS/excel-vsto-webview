using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Microsoft.Web.WebView2.Core;
using Microsoft.Web.WebView2.WinForms;

namespace excel_vsto_webview
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private async void Form1_Load(object sender, EventArgs e)
        {
            // await InitializeCoreWebView2Async();
            // WebsiteNavigate(webView21, "https://github.com/");

            await InitializeCoreWebView2Async(webView21, @"C:\Temp");

            System.Diagnostics.Debug.WriteLine("Info: after InitializeCoreWebView2Async");

            //navigate to URL by setting Source property
            webView21.Source = new Uri("https://www.microsoft.com", UriKind.Absolute);
        }

        #region Code from @cgeier https://github.com/MicrosoftEdge/WebView2Feedback/issues/187
        private async Task AddExecuteOnDocumentCreatedAsyncCode()
        {
            if (webView21 != null && webView21.CoreWebView2 != null)
            {
                string jsCode = string.Empty;

                //ToDo: add code here

                if (!String.IsNullOrEmpty(jsCode))
                {
                    await webView21.CoreWebView2.AddScriptToExecuteOnDocumentCreatedAsync(jsCode);
                }
            }
        }

        public async Task InitializeCoreWebView2Async()
        {
            System.Diagnostics.Debug.WriteLine("Info: before EnsureCoreWebView2Async");

            //wait for CoreWebView2 initialization
            await webView21.EnsureCoreWebView2Async();

            System.Diagnostics.Debug.WriteLine("Info: after EnsureCoreWebView2Async");

        }

        private async Task InitializeCoreWebView2Async(WebView2 wv, string webCacheDir = "")
        {
            //initialize CorewWebView2
            //await webView21.EnsureCoreWebView2Async();
            CoreWebView2EnvironmentOptions options = null;
            string tempWebCacheDir = string.Empty;
            CoreWebView2Environment webView2Environment = null;

            //set value
            tempWebCacheDir = webCacheDir;

            if (String.IsNullOrEmpty(tempWebCacheDir))
            {
                //get fully-qualified path to user's temp folder
                tempWebCacheDir = System.IO.Path.GetTempPath();

                tempWebCacheDir = System.IO.Path.Combine(tempWebCacheDir, System.Guid.NewGuid().ToString("N"));
            }

            //webView2Environment = await CoreWebView2Environment.CreateAsync(@"C:\Program Files (x86)\Microsoft\Edge Dev\Application\85.0.564.8", tempWebCacheDir, options);
            webView2Environment = await CoreWebView2Environment.CreateAsync(null, tempWebCacheDir, options);

            //wait for CoreWebView2 initialization
            await wv.EnsureCoreWebView2Async(webView2Environment);

            System.Diagnostics.Debug.WriteLine("Cache data folder set to: " + tempWebCacheDir);

            //add desired code using AddScriptToExecuteOnDocumentCreatedAsync
            // await AddExecuteOnDocumentCreatedAsyncCode();
        }

        public void WebsiteNavigate(Microsoft.Web.WebView2.WinForms.WebView2 wv, string dest)
        {
            string tempDest = dest;

            if (wv != null && wv.CoreWebView2 != null)
            {
                if (!String.IsNullOrEmpty(dest))
                {
                    if (dest != "about:blank" &&
                        !dest.StartsWith("edge://") &&
                        !dest.StartsWith("file://") &&
                        !dest.StartsWith("http://") &&
                        !dest.StartsWith("https://"))
                    {
                        //URL must start with one of the specified strings
                        //if not, pre-pend with "http://"
                        //Debug.Print("Prepending \"http://\" to URL.");

                        //set value
                        tempDest = "http://" + dest;
                    }

                    //option 1
                    wv.Source = new Uri(tempDest, UriKind.Absolute);

                    //option 2
                    //wv.CoreWebView2.Navigate(tempDest);
                }
            }
        }
        #endregion
    }
}
