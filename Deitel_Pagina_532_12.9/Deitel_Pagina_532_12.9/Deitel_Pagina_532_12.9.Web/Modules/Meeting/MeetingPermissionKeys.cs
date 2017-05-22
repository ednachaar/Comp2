
using Serenity.Extensibility;
using System.ComponentModel;

namespace Deitel_Pagina_532_12._9.Meeting
{
    [NestedPermissionKeys]
    public class PermissionKeys
    {
        [Description("[General]")]
        public const string General = "Meeting:General";

        public const string Management = "Meeting:Management";
    }
}
