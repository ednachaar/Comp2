
namespace Deitel_Pagina_532_12._9.Membership
{
    using Serenity.ComponentModel;
    using Serenity.Services;
    using System;
    using System.ComponentModel;

    [FormScript("Membership.ResetPassword")]
    public class ResetPasswordRequest : ServiceRequest
    {
        [Ignore]
        public String Token { get; set; }
        [PasswordEditor, Required(true), DisplayName("New Password")]
        public String NewPassword { get; set; }
        [PasswordEditor, Required(true), DisplayName("Confirm Password")]
        public String ConfirmPassword { get; set; }
    }
}