
namespace Deitel_Pagina_532_12._9.Administration
{
    using Newtonsoft.Json;
    using Serenity.Services;
    using System;
    using System.Collections.Generic;

    public class RolePermissionUpdateRequest : ServiceRequest
    {
        public Int32? RoleID { get; set; }
        [JsonProperty(Required = Required.AllowNull)]
        public string Module { get; set; }
        [JsonProperty(Required = Required.AllowNull)]
        public string Submodule { get; set; }
        public List<string> Permissions { get; set; }
    }
}