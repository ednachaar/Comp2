
namespace Deitel_Pagina_532_12._9.Organization {

    @Serenity.Decorators.registerClass()
    @Serenity.Decorators.responsive()
    export class ContactDialog extends Serenity.EntityDialog<ContactRow, any> {
        protected getFormKey() { return ContactForm.formKey; }
        protected getIdProperty() { return ContactRow.idProperty; }
        protected getLocalTextPrefix() { return ContactRow.localTextPrefix; }
        protected getNameProperty() { return ContactRow.nameProperty; }
        protected getService() { return ContactService.baseUrl; }

        protected form = new ContactForm(this.idPrefix);

    }
}