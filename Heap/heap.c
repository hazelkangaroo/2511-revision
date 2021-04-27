#include<stdio.h>

#inclue "heap.h"

Heap newHeap(int N) {
	Heap new = malloc(sizeof(HeapRep));
	new->items = malloc(sizeof(Item) * (N+1));
	new->nitems = 0;
	new->nslots = N;
	return new;
}


void HeapInsert(Heap h, Item it) {
	assert (h->nitems < h->nslots);
	h->nitems++;
	h->items[h->nitems] = it;
	Fixup(h->items, h->nitems);
}

void Fixup(Item a[], int i) {
	while (i > 1 && a[i] > a[i/2]) {
		//swap
		int temp = a[i];
		a[i/2] = temp;
		a[i] = a[i/2];
		i = i/2;
	}
}

Item HeapDelete(Heap h) {
	Item re = h->items[1];
	h->items[1] = h->items[h->nitems];
	h->nitems--;
	fixDown(h->items, 1, h->items[nitems];
	return re;
  }
		

            
            
