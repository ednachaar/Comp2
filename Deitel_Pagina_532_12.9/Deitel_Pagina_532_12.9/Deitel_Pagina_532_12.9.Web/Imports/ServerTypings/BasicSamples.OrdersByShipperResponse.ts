namespace Deitel_Pagina_532_12._9.BasicSamples {
    export interface OrdersByShipperResponse extends Serenity.ServiceResponse {
        Values?: { [key: string]: any }[];
        ShipperKeys?: string[];
        ShipperLabels?: string[];
    }
}

