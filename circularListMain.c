#include "circularList.h"
#include <stdio.h>

int main()
{	
	struct CircularList* deque = circularListCreate(); 
	circularListAddBack(deque, (TYPE)1);
	circularListAddBack(deque, (TYPE)2);
	circularListAddBack(deque, (TYPE)3);
	circularListAddFront(deque, (TYPE)4);
	circularListAddFront(deque, (TYPE)5);
	circularListAddFront(deque, (TYPE)6);
	circularListPrint(deque);
	printf("\n%g", circularListFront(deque));
	printf("\n%g", circularListBack(deque));
	
	circularListRemoveFront(deque);
	circularListRemoveBack(deque);
	printf("\n");
	circularListPrint(deque);
	
	circularListReverse(deque);
	printf("\n");
	circularListPrint(deque);
	
	circularListDestroy(deque);
	
	return 0;
}
