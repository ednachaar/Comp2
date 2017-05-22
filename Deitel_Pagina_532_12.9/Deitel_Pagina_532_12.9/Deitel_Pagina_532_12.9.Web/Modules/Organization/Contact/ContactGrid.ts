
namespace Deitel_Pagina_532_12._9.Organization {
    
    @Serenity.Decorators.registerClass()
    export class ContactGrid extends Serenity.EntityGrid<ContactRow, any> {
        protected getColumnsKey() { return 'Organization.Contact'; }
        protected getDialogType() { return ContactDialog; }
        protected getIdProperty() { return ContactRow.idProperty; }
        protected getLocalTextPrefix() { return ContactRow.localTextPrefix; }
        protected getService() { return ContactService.baseUrl; }

        constructor(container: JQuery) {
            super(container);
        }
    }
}