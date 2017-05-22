namespace Deitel_Pagina_532_12._9.BasicSamples
{
    using Serenity.Services;
    using System;

    public class CustomerGrossSalesListRequest : ListRequest
    {
        public DateTime? StartDate { get; set; }
        public DateTime? EndDate { get; set; }
    }
}