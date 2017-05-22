/// <reference path="../Common/Helpers/LanguageList.ts" />

namespace Deitel_Pagina_532_12._9.ScriptInitialization {
    Q.Config.responsiveDialogs = true;
    Q.Config.rootNamespaces.push('Deitel_Pagina_532_12._9');
    Serenity.EntityDialog.defaultLanguageList = LanguageList.getValue;
}