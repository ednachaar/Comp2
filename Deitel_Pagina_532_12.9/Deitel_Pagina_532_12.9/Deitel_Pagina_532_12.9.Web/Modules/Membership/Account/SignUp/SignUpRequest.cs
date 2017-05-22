
namespace Deitel_Pagina_532_12._9.Membership
{
    using Serenity.Services;
    using System;

    public class SignUpRequest : ServiceRequest
    {
        public String DisplayName { get; set; }
        public String Email { get; set; }
        public String Password { get; set; }
    }
}