# Stretch

* Modify `destroy` to free the list head-first as opposed to tail-first.
* Create these functions:
	* createLinkedList(int size);
		* Create linked list of certain size, return pointer to the head and initialise all values to 0.
	* listLength(linkedList \*head)
		* return the length of a list
	* prepend(linkedList \*head, int data)
		* Add a node to the beginning of a list (before head) and return a pointer to it.
	* insertData(linkedList \*head, int data, int index)
		* Insert data at that index in the list. Append if index > length.

Test as you go with valgrind.

