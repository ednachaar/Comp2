
namespace Deitel_Pagina_532_12._9.BasicSamples.Columns
{
    using Serenity.ComponentModel;
    using System;

    [ColumnsScript("BasicSamples.DragDropSample")]
    [BasedOnRow(typeof(Entities.DragDropSampleRow))]
    public class DragDropSampleColumns
    {
        [EditLink, Width(300)]
        public String Title { get; set; }
    }
}