/*
 * main.c
 *
 *  Created on: 2014Äê12ÔÂ9ÈÕ
 *      Author: Administrator
 */
#include "sqlist.h"

struct A{
	int a;
	char b;
	int *p;
};

int main(int argc, char *argv[])
{
	int e = 1;
	struct A a = {1, 'a', &e};
	struct A *b = &a;
	printf("%d\n", b->a);
	return 0;
}

