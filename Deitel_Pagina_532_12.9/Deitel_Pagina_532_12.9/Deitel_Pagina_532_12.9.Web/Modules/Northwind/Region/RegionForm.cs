
namespace Deitel_Pagina_532_12._9.Northwind.Forms
{
    using Serenity.ComponentModel;
    using System;

    [FormScript("Northwind.Region")]
    [BasedOnRow(typeof(Entities.RegionRow))]
    public class RegionForm
    {
        public Int32? RegionID { get; set; }
        public String RegionDescription { get; set; }
    }
}