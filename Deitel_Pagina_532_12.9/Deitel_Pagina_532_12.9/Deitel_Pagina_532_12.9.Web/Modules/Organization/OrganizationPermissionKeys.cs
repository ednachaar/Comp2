
using Serenity.Extensibility;
using System.ComponentModel;

namespace Deitel_Pagina_532_12._9.Organization
{
    [NestedPermissionKeys]
    public class PermissionKeys
    {
        [Description("[General]")]
        public const string General = "Organization:General";
        
        [DisplayName("Business Units")]
        public class BusinessUnits
        {
            public const string Management = "Organization:BusinessUnits:Management";
        }

        public class Contacts
        {
            public const string Management = "Organization:Contacts:Management";
        }
    }
}
