
namespace Deitel_Pagina_532_12._9.BasicSamples.Forms
{
    using Serenity.ComponentModel;
    using System;

    [FormScript("BasicSamples.DragDropSample")]
    [BasedOnRow(typeof(Entities.DragDropSampleRow))]
    public class DragDropSampleForm
    {
        public String Title { get; set; }
    }
}