
namespace Deitel_Pagina_532_12._9.Meeting.Forms
{
    using Serenity.ComponentModel;
    using System;

    [FormScript("Meeting.MeetingAgendaType")]
    [BasedOnRow(typeof(Entities.MeetingAgendaTypeRow))]
    public class MeetingAgendaTypeForm
    {
        public String Name { get; set; }
    }
}