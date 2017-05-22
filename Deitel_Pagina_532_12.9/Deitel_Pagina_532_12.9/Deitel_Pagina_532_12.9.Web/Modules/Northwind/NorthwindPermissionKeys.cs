
using Serenity.Extensibility;
using System.ComponentModel;

namespace Deitel_Pagina_532_12._9.Northwind
{
    [NestedPermissionKeys]
    [DisplayName("Northwind")]
    public class PermissionKeys
    {
        [DisplayName("Customers")]
        public class Customer
        {
            public const string Delete = "Northwind:Customer:Delete";
            [Description("Create/Update")]
            public const string Modify = "Northwind:Customer:Modify";
            public const string View = "Northwind:Customer:View";
        }

        [Description("[General]")]
        public const string General = "Northwind:General";
    }
}
