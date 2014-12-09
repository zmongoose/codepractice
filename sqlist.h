/*
 * list.h
 *
 *  Created on: 2014Äê12ÔÂ9ÈÕ
 *      Author: Administrator
 */

#ifndef LIST_H_
#define LIST_H_

#include "common.h"
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef struct{
	ElemType *elem;
	int length;
	int listsize;
}SqList;

Status InitList_Sq(SqList *L);
Status ListInsert_Sq(SqList *L, int i, ElemType e);
Status ListDelete_Sq(SqList *L, int i, ElemType *e);
int LocateElem_Sq(SqList *L, ElemType e, Status (*compare)(ElemType, ElemType));
#endif /* LIST_H_ */
