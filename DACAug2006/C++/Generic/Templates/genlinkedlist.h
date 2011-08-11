#ifndef GENLINKEDLIST_H
#define GENLINKEDLIST_H
#include <iterator>

template<typename Any>
class LinkedList
{
private:
	class ListNode
	{
	public:
		ListNode(const Any& i) : item(i), next(0){}
		Any item;
		ListNode* next;
	};
		
	ListNode* front;
	ListNode* back;
	
public:
	LinkedList() : front(0), back(0) {}
	
	void Add(const Any& item)
	{
		ListNode* node = new ListNode(item);
		if(front == 0)
			front = back = node;
		else
		{
			back->next = node;
			back = node;
		}
	}
	
	~LinkedList()
	{
		while(front)
		{
			ListNode* temp = front;
			front = temp->next;
			delete temp;
		}
	}
	
	class Iterator : public std::iterator< 
					std::forward_iterator_tag, Any>
	{
	public:
		Iterator(ListNode* node) : current(node){}
		
		Any& operator*() const
		{
			return current->item;
		}

		Any* operator->() const
		{
			return &current->item;
		}
	
		bool operator!=(const Iterator& other) const
		{
			return current != other.current;
		}

		Iterator& operator++()
		{
			current = current->next;
			return *this;
		}

	private:
		ListNode* current;
	};

	Iterator Begin() const
	{
		return Iterator(front);
	}

	Iterator End() const
	{
		return Iterator(back->next);
	}

};

#endif






