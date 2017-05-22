namespace Deitel_Pagina_532_12._9.Administration {
    export interface TranslationUpdateRequest extends Serenity.ServiceRequest {
        TargetLanguageID?: string;
        Translations?: { [key: string]: string };
    }
}

