namespace Deitel_Pagina_532_12._9.Authorization {
    export declare let userDefinition: ScriptUserDefinition;

    Object.defineProperty(Authorization, 'userDefinition', {
        get: function () {
            return Q.getRemoteData('UserData');
        }
    });

    export function hasPermission(permissionKey: string) {
        let ud = userDefinition;
        return ud.Username === 'admin' || !!ud.Permissions[permissionKey];
    }
}