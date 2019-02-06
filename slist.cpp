#include "slist.h"
#include <iostream>

/*

Class Library File

*/
class Node{
	public:
	    Node* next;
	    Airport data;
	    Node();
	    Node(Airport a);
	    Node(Airport a, Node* b);
};
// Constructor
Node::Node(){
	this->data = 0;
	this->next = NULL;
}

Node::Node(int a){
	this->data = a;
	this->next = NULL;
}

Node::Node(Airport a, Node* b){
	this->data = a;
	this->next = b;
}

//Constructor
LinkedList::LinkedList()
{
    this->length = 0;
    this->head = new Node();
}
//Destructor
LinkedList::~LinkedList()
{
   Node* current = this->head;
    while(current)
    {
        this->head = current->next;
        this->length -= 1;
		delete current;
		current = this->head;
    }
    cout << "LIST DELETED: " << this->length << endl;
}





void LinkedList::add(Airport value){ //!!!!!!!!
    Node* newVal = new Node(value, this->head);
    for(x = 0; x < this->length+1; x++){
        newVal = newVal->next;
    }
    this->length++;
}				//Adds a new value to the end of this list.

void LinkedList::clear(){ //!!!!!!
    Node* current = this->head;
    Node* temp;
    while(current != NULL){
        temp = current->next;
        delete[] current;
        current = temp;
    }
}					//Removes all elements from this list.

bool LinkedList::equals(LinkedList list){ //!!!!!!
    if(this->length != list->length){
        return false;
    }
    Node* list1 = this->head;
    Node* list2 = list->head;
    int x = 0;
    while(x != this->length){
        if((list1->Airport->&longitude != list2->Airport->&longitude) || (list1->Airport->&latitude != list->Airport->&latitude)){    
            return false; 
        }
        else if((list1->Airport->code[0] != list2->Airport->code[0]) || (list1->Airport->code[1] != list2->data->code[1]) || (list1->data->code[2] != list2->data->code[2]) || (list1->data->code[3] != list2->data->code[3]) || (list1->data->code[4] != list2->data->code[4])){
            return false
        }
        list1 = list1->next;
        list2 = list2->next;
        x++;
    }
    return true;
}				//Returns true if the two lists contain the same elements in the same order.

Airport* LinkedList::get(index){
    Node* target = this->head;
    int x = 0;
        while(x != index){
            target = target->next;
            x++;
        }
    return target->data;
}			//Returns the element at the specified index in this list.

void LinkedList::insert(int ind, AirPort* ne){
    Node* nITA = this->head;
    int x = 0;
    while(x != ind)
        {
            nITA = nITA->next;
            x++;
        }
    Node* nITAPlusOne = nITA->next;
    Node* actualThing = new Node(ne, nITAPlusOne);
    this->length++;
    nITA->next = actualThing;
}		//Inserts the element into this list before the specified index.

//exchg(index1, index2)		//Switches the payload data of specified indexex.

void LinkedList::swap(int index1, int index2){
    Node* edon = this->head;
    Node* doen = this->head;
    Node* switcheroo = this->head;
    for(int i = 0; i < this->length; i++){
        edon = edon->next;
        if (i == index1){
            for(int z = 0; z < this->length; z++){
                doen = doen->next;
                if (z == index2){
                    break;
                }
            }
        }
        else{
            switcheroo = switcheroo->next;
        }
    }
    Node* yabbadabba = edon->next;
    edon->next = yabbadabba;
    doen->next = edon;
    switcheroo->next = doen;
}		//Swaps node located at index1 with node at index2

// isEmpty()				//Returns true if this list contains no elements.

void LinkedList::remove(int index){
    Node* target = this->head;
    while(int x != index){
        target = target->next;
        x++;
    }
    this->length = this->length - 1;
    return target->data;
    
}			//Removes the element at the specified index from this list.

// set(index, value)		//Replaces the element at the specified index in this list with a new value.

int LinkedList::size(){
    return this->length;
}					//Returns the number of elements in this list.

// subList(start, length)	//Returns a new list containing elements from a sub-range of this list.

// toString()				//Converts the list to a printable string representation.
