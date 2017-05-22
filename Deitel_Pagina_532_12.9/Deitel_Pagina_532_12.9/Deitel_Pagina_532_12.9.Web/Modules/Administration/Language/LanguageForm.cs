
namespace Deitel_Pagina_532_12._9.Administration.Forms
{
    using Serenity.ComponentModel;
    using System;

    [FormScript("Administration.Language")]
    [BasedOnRow(typeof(Entities.LanguageRow))]
    public class LanguageForm
    {
        public String LanguageId { get; set; }
        public String LanguageName { get; set; }
    }
}