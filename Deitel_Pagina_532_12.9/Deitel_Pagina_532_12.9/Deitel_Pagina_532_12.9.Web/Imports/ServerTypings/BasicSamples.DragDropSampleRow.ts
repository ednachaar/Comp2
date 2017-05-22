﻿namespace Deitel_Pagina_532_12._9.BasicSamples {
    export interface DragDropSampleRow {
        Id?: number;
        ParentId?: number;
        Title?: string;
    }

    export namespace DragDropSampleRow {
        export const idProperty = 'Id';
        export const nameProperty = 'Title';
        export const localTextPrefix = 'BasicSamples.DragDropSample';

        export namespace Fields {
            export declare const Id: string;
            export declare const ParentId: string;
            export declare const Title: string;
        }

        ['Id', 'ParentId', 'Title'].forEach(x => (<any>Fields)[x] = x);
    }
}

