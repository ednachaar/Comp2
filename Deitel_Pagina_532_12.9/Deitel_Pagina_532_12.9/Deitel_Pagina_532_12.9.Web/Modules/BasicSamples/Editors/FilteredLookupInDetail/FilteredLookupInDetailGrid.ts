/// <reference path="../../../Northwind/Order/OrderGrid.ts" />

namespace Deitel_Pagina_532_12._9.BasicSamples {

    /**
     * Subclass of OrderGrid to override dialog type to FilteredLookupInDetailDialog
     */
    @Serenity.Decorators.registerClass()
    export class FilteredLookupInDetailGrid extends Northwind.OrderGrid {

        protected getDialogType() { return FilteredLookupInDetailDialog; }

        constructor(container: JQuery) {
            super(container);
        }
    }
}