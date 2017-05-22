﻿
namespace Deitel_Pagina_532_12._9.AdminLTE
{
    using System.Web.Mvc;

    [Authorize, RoutePrefix("AdminLTE/Mailbox"), Route("{action=index}")]
    public class MailboxController : Controller
    {
        public ActionResult Inbox()
        {
            return View(MVC.Views.AdminLTE.Mailbox.Inbox);
        }

        public ActionResult Compose()
        {
            return View(MVC.Views.AdminLTE.Mailbox.Compose);
        }

        public ActionResult Read()
        {
            return View(MVC.Views.AdminLTE.Mailbox.Read);
        }
    }
}