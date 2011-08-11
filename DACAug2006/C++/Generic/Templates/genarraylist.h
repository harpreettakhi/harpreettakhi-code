#ifndef GENARRAYLIST_H
#define GENARRAYLIST_H

template<typename Any, int Increment = 5>
class ArrayList
{
public:
	ArrayList()
	{
		capacity = Increment;
		count = 0;
		items = new Any[capacity];		
	}
	
	int Count() const
	{
		return count;
	}
	
	Any& operator[](int index) const throw(int)
	{
		if(index < 0 || index >= count)
			throw index;
		return items[index];
	}
	
	void Add(const Any& item)
	{
		if(count == capacity) 
		{
			capacity += Increment;
			Any* temp = new Any[capacity];
			for(int i = 0; i < count; i++)
				temp[i] = items[i];
			delete[] items;
			items = temp;
		}
		items[count++] = item;
	} 
	
	typedef Any* Iterator;
	
	Iterator Begin() const
	{
		return items;
	}

	Iterator End() const
	{
		return items + count;
	}
	
	~ArrayList()
	{
		delete[] items;
	}

private:
	Any* items;
	int capacity;
	int count;
};

#endif




