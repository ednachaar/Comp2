
namespace Deitel_Pagina_532_12._9.Administration
{
    public interface IDirectoryService
    {
        DirectoryEntry Validate(string username, string password);
    }
}