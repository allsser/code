#pragma once
typedef void * Element;
typedef struct _Node Node;
typedef Node *Link;
struct _Node
{
	Link next;
	Link prev;
	Element data;
};

typedef struct _LinkedList LinkedList;
struct _LinkedList
{
	Link head;
	Link tail;
	int usage;
};


LinkedList *New_LinkedList();
void Delete_LinkedList(LinkedList *linkedlist);
void LinkedList_PushBack(LinkedList *linkedlist, Element data);
void LinkedList_Insert(LinkedList *linkedlist, Link pos, Element data);
Link LinkedList_Begin(LinkedList *linkedlist);
Link LinkedList_End(LinkedList *linkedlist);
void LinkedList_Erase(LinkedList *linkedlist, Link pos);