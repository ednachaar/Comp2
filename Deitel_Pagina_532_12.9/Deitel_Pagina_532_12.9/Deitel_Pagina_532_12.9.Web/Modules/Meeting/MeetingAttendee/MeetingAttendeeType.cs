
using Serenity.ComponentModel;
using System.ComponentModel;

namespace Deitel_Pagina_532_12._9.Meeting
{
    [EnumKey("Meeting.MeetingAttendeeType")]
    public enum MeetingAttendeeType
    {
        [Description("Attendee")]
        Attendee = 1,
        [Description("Guest")]
        Guest = 2
    }
}