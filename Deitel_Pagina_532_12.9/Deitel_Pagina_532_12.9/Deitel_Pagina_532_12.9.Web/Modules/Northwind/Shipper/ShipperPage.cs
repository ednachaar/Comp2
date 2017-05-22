﻿



namespace Deitel_Pagina_532_12._9.Northwind.Pages
{
    using Serenity.Web;
    using System.Web.Mvc;

    [RoutePrefix("Northwind/Shipper"), Route("{action=index}")]
    [PageAuthorize(typeof(Entities.ShipperRow))]
    public class ShipperController : Controller
    {
        public ActionResult Index()
        {
            return View(MVC.Views.Northwind.Shipper.ShipperIndex);
        }
    }
}
