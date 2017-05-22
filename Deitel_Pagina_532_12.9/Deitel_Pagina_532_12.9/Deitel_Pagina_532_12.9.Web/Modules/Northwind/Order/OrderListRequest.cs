using Serenity.Services;

namespace Deitel_Pagina_532_12._9.Northwind
{
    public class OrderListRequest : ListRequest
    {
        public int? ProductID { get; set; }
    }
}