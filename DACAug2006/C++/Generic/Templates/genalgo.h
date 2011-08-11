#ifndef GENALGO_H
#define GENALGO_H
#include <iostream>
#include <iterator>

template<typename I>
int Write(I begin, I end)
{
	int count = 0;
	std::cout << "[";
	for(I& i = begin; i != end; ++i)
	{
		if(count++ > 0) std::cout << ", ";
		std::cout << *i;
	}
	std::cout << "]" << std::endl;
	return count;
}

template<typename I, typename P>
int WriteIf(I begin, I end, P check)
{
	int count = 0;
	std::cout << "[";
	for(I& i = begin; i != end; ++i)
	{
		if(check(*i))
		{
			if(count++ > 0) std::cout << ", ";
			std::cout << *i;
		}
	}
	std::cout << "]" << std::endl;
	return count;
}

template<typename I>
I FindMax(I begin, I end)
{
	I max = begin;
	while(++begin != end)
		if(*begin > *max) max = begin;
	return max;
}

template<typename I>
I Search(I begin, I end, const  
	 typename std::iterator_traits<I>::value_type& key)
{
	for(;begin != end; ++begin)
		if(*begin == key) break;
	return begin;
}

template<typename I>
I Move(I begin, int steps, std::forward_iterator_tag)
{
	while(steps--)
		++begin;
	return begin;
}

template<typename I>
I Move(I begin, int steps, 
		std::random_access_iterator_tag)
{
	begin += steps;
	return begin;
}

template<typename I>
typename std::iterator_traits<I>::value_type Middle(
		I begin, I end)
{
	using namespace std;
	int count = 0;
	for(I i = begin; i != end; ++i)
		count++;
	I m = Move(begin, count / 2, 
		typename iterator_traits<I>::iterator_category());
	return *m;
}

#endif
















