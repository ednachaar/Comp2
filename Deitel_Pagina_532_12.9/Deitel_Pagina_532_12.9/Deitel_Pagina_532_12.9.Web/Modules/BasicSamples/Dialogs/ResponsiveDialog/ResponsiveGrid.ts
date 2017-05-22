/// <reference path="../../../Northwind/Order/OrderGrid.ts" />

namespace Deitel_Pagina_532_12._9.BasicSamples {

    /**
     * Subclass of OrderGrid to override dialog type to ResponsiveDialog
     */
    @Serenity.Decorators.registerClass()
    export class ResponsiveGrid extends Northwind.OrderGrid {

        protected getDialogType() { return ResponsiveDialog; }

        constructor(container: JQuery) {
            super(container);
        }
    }
}