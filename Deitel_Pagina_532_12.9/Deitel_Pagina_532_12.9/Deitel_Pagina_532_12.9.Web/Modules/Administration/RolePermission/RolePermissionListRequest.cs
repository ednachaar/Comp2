
namespace Deitel_Pagina_532_12._9.Administration
{
    using Serenity.Services;

    public class RolePermissionListRequest : ServiceRequest
    {
        public int? RoleID { get; set; }
        public string Module { get; set; }
        public string Submodule { get; set; }
    }
}