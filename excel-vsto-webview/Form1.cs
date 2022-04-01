using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

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
            await InitializeCoreWebView2Async();
            WebsiteNavigate(webView21, "https://github.com/");
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

        private async Task InitializeCoreWebView2Async()
        {
            //initialize CorewWebView2
            await webView21.EnsureCoreWebView2Async();

            //add desired code using AddScriptToExecuteOnDocumentCreatedAsync
            await AddExecuteOnDocumentCreatedAsyncCode();
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
