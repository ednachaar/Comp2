namespace Deitel_Pagina_532_12._9.Northwind {

    @Serenity.Decorators.registerClass()
    export class CategoryDialog extends Serenity.EntityDialog<CategoryRow, any> {
        protected getFormKey() { return CategoryForm.formKey; }
        protected getIdProperty() { return CategoryRow.idProperty; }
        protected getLocalTextPrefix() { return CategoryRow.localTextPrefix; }
        protected getNameProperty() { return CategoryRow.nameProperty; }
        protected getService() { return CategoryService.baseUrl; }

        protected form = new CategoryForm(this.idPrefix);
    }
}