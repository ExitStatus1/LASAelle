/*

Header file for single linked list class library

*/
class LinkedList{
    public:
        LinkedList();
        ~LinkedList();
        Node* head = new Node();
        int length;

        void add(Airport value);		//Adds a new value to the end of this list.

        void clear();					//Removes all elements from this list.

        bool equals(LinkedList list);				//Returns true if the two lists contain the same elements in the same order.

        void get(int index);			//Returns the element at the specified index in this list.

        void insert(int ind, Airport* ne);		//Inserts the element into this list before the specified index.

        //exchg(index1, index2)		//Switches the payload data of specified indexex.

        void swap(int index1, int index2);		//Swaps node located at index1 with node at index2

        bool isEmpty();				//Returns true if this list contains no elements.
       
        void remove(int index);			//Removes the element at the specified index from this list.

        // set(index, value)		//Replaces the element at the specified index in this list with a new value.

        int size();					//Returns the number of elements in this list.

        // subList(start, length)	//Returns a new list containing elements from a sub-range of this list.

        // toString()				//Converts the list to a printable string representation.
}