/// <reference path="../../../Northwind/Order/OrderDialog.ts" />

namespace Deitel_Pagina_532_12._9.BasicSamples {

    /**
     * A version of order dialog converted to a panel by adding Serenity.Decorators.panel decorator.
     */
    @Serenity.Decorators.panel()
    export class EntityDialogAsPanel extends Northwind.OrderDialog {

        constructor() {
            super();

            this.element.addClass('flex-layout');

        }
    }
}