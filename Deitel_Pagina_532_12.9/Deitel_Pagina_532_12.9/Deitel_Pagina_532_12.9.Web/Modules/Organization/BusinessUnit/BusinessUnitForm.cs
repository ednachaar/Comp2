
namespace Deitel_Pagina_532_12._9.Organization.Forms
{
    using Serenity.ComponentModel;
    using System;

    [FormScript("Organization.BusinessUnit")]
    [BasedOnRow(typeof(Entities.BusinessUnitRow))]
    public class BusinessUnitForm
    {
        public String Name { get; set; }
        public Int32 ParentUnitId { get; set; }
    }
}