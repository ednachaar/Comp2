using Serenity.Services;
using System.Collections.Generic;

namespace Deitel_Pagina_532_12._9.Administration
{

    public class TranslationUpdateRequest : ServiceRequest
    {
        public string TargetLanguageID { get; set; }
        public Dictionary<string, string> Translations { get; set; }
    }
}