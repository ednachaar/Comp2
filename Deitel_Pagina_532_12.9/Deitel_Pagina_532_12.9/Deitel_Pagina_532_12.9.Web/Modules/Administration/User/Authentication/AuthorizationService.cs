namespace Deitel_Pagina_532_12._9.Administration
{
    using Serenity;
    using Serenity.Abstractions;

    public class AuthorizationService : IAuthorizationService
    {
        public bool IsLoggedIn
        {
            get { return !string.IsNullOrEmpty(Username); }
        }

        public string Username
        {
            get { return WebSecurityHelper.HttpContextUsername; }
        }
    }
}