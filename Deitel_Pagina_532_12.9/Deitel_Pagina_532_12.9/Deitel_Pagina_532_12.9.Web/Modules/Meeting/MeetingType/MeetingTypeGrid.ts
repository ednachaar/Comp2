﻿
namespace Deitel_Pagina_532_12._9.Meeting {
    
    @Serenity.Decorators.registerClass()
    export class MeetingTypeGrid extends Serenity.EntityGrid<MeetingTypeRow, any> {
        protected getColumnsKey() { return 'Meeting.MeetingType'; }
        protected getDialogType() { return MeetingTypeDialog; }
        protected getIdProperty() { return MeetingTypeRow.idProperty; }
        protected getLocalTextPrefix() { return MeetingTypeRow.localTextPrefix; }
        protected getService() { return MeetingTypeService.baseUrl; }

        constructor(container: JQuery) {
            super(container);
        }
    }
}