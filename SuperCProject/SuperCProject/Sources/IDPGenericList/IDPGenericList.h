//
//  IDPGenericDefineList.h
//  SuperCProject
//
//  Created by Ievgen on 4/6/16.
//  Copyright © 2016 1milliondollarsstartup. All rights reserved.
//

#ifndef IDPGenericList_h

#define IDPGenericList_h

#include <stdio.h>
#include <stdbool.h>

typedef struct IDPListNode IDPListNode;
typedef struct IDPList IDPList;

struct IDPListNode {
    void *_data;
    IDPListNode *_next;
};

struct IDPList {
    unsigned long _size;
    IDPListNode *_first;
    IDPListNode *_last;
};

bool    IDPIsEmptyList(const IDPList *list);
unsigned long IDPGetSizeForList(const IDPList *list);
void *  IDPGetFrontNodeDataForList(const IDPList *list);
void    IDPPopulateFrontNodeForListWithData(IDPList *list, void *data);
void *  IDPRemoveFrontNodeForList(IDPList *list);
IDPList * IDPCreateNewList();

#endif /* IDPGenericDefineList_h */