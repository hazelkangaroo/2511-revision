//Heap interface


tyepdef struct HeapRep{
	Item *items;
	int nitems;
	int nslots;
}HeapRep;

struct HeapRep *Heap;



//Functions:
//Creating new heap with N slots
Heap newHeap(int N);
	
//Inserting an item into heap
void HeapInsert(Heap h, Item it);
	
//fix up Heap to keep it balanced
void Fixup(Item a[], int i);
