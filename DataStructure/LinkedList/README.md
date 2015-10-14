# LinkedList implementation in C
I tried to bring some OOP style code to our old plain C language. And it turned out to be nice.

Due to this "OOP" style, some code seems to be "reduntant". Bear with please.

## LinkedList
### Members

* head
		
		Head of the list.

* current

		Pointer of the current access node.
* size
		
		Size of the whole list.

* currentIndex

		Current index of the current access node. 

### Methods
	
* NewLinkedList() 
	
		Returns a new instance of LinkedList.
	
* prev(LinkedList* this)

		Returns the prev node of the current node and will move current pointer backwards. 
		
* next(LinkedList* this)
		
		Returns the next node of the current node and will move current pointer forwards.
		
* search(LinkedList * this, LinkedListNode * target)

		Return the node pointer which has the same value of target pointer.
		
* delete(LinkedList * this, LinkedListNode * target)

		Delete the node which has the same value of target pointer.
		
* deleteAt(LinkedList* this, int index)
	
		Delete LinkedList[index].
		
* getAt(LinkedList* this, int index)

		Get LinkedList[index].