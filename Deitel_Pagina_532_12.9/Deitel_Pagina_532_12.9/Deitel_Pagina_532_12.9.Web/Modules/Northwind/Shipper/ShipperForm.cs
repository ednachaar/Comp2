
namespace Deitel_Pagina_532_12._9.Northwind.Forms
{
    using Serenity.ComponentModel;
    using System;

    [FormScript("Northwind.Shipper")]
    [BasedOnRow(typeof(Entities.ShipperRow))]
    public class ShipperForm
    {
        public String CompanyName { get; set; }
        [Northwind.PhoneEditor]
        public String Phone { get; set; }
    }
}