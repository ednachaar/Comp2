
namespace Deitel_Pagina_532_12._9.Administration.Pages
{
    using Serenity.Web;
    using System.Web.Mvc;

    [RoutePrefix("Administration/User"), Route("{action=index}")]
    [PageAuthorize(typeof(Entities.UserRow))]
    public class UserController : Controller
    {
        public ActionResult Index()
        {
            return View(MVC.Views.Administration.User.UserIndex);
        }
    }
}