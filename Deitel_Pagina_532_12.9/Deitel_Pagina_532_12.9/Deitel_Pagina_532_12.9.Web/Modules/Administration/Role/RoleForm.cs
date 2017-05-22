
namespace Deitel_Pagina_532_12._9.Administration.Forms
{
    using Serenity.ComponentModel;
    using System;

    [FormScript("Administration.Role")]
    [BasedOnRow(typeof(Entities.RoleRow))]
    public class RoleForm
    {
        public String RoleName { get; set; }
    }
}