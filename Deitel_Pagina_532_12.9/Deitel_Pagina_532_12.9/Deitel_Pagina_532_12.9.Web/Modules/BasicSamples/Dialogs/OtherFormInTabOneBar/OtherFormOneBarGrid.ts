﻿/// <reference path="../../../Northwind/Order/OrderGrid.ts" />

namespace Deitel_Pagina_532_12._9.BasicSamples {

    /**
     * Subclass of OrderGrid to override dialog type to OtherFormInTabOneBarDialog
     */
    @Serenity.Decorators.registerClass()
    export class OtherFormInTabOneBarGrid extends Northwind.OrderGrid {

        protected getDialogType() { return OtherFormOneBarDialog; }

        constructor(container: JQuery) {
            super(container);
        }
    }
}