/// <reference path="SelectableEntityGrid.ts" />

namespace Deitel_Pagina_532_12._9.BasicSamples {

    @Serenity.Decorators.registerClass()
    export class RowSelectionGrid extends SelectableEntityGrid<Northwind.SupplierRow, any> {
        protected getColumnsKey() { return "Northwind.Supplier"; }
        protected getDialogType() { return <any>Northwind.SupplierDialog; }
        protected getIdProperty() { return Northwind.SupplierRow.idProperty; }
        protected getLocalTextPrefix() { return Northwind.SupplierRow.localTextPrefix; }
        protected getService() { return Northwind.SupplierService.baseUrl; }

        constructor(container: JQuery) {
            super(container);
        }
    }
}