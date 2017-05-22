﻿
namespace Deitel_Pagina_532_12._9.BasicSamples.Forms
{
    using Serenity.ComponentModel;
    using System;

    [FormScript("BasicSamples.ChangingLookupText")]
    [BasedOnRow(typeof(Northwind.Entities.OrderDetailRow))]
    public class ChangingLookupTextForm
    {
        [ChangingLookupTextEditor]
        public Int32 ProductID { get; set; }
        public Decimal UnitPrice { get; set; }
        public Int32 Quantity { get; set; }
        public Double Discount { get; set; }
    }
}