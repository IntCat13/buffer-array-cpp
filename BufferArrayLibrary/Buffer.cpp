#include "Buffer.h"

namespace BufferArray
{
	// Creating a collection with the selected size
	Buffer::Buffer(int newLength)
	{
		a = new int[newLength];
		Length = newLength;
		freeIndex = 0;
	}

	// The standard collection will be created with size 10
	Buffer::Buffer()
	{
		a = new int[10];
		freeIndex = 0;
		Length = 10;
	}

	Buffer::~Buffer()
	{
		delete a;
	}

	// This method will add an item to the array on a free index
	void Buffer::Add(int value)
	{
		if (freeIndex < Length)
		{
			a[freeIndex] = value;
			freeIndex++;
		}
		else {
			cout << "Array is full!" << endl;
		}
	}

	// Returns the available index to be filled
	int Buffer::getIndex()
	{
		return freeIndex;
	}

	// Returns size of array
	int Buffer::Size()
	{
		return Length;
	}

	// Element on selected index
	int Buffer::getAt(int i)
	{
		if (i < Length)
		{
			return a[i];
		}
		else {
			cout << "Index out of bounds!" << endl;
		}
	}

	// First element of array
	int Buffer::getFirst()
	{
		if (Length > 0)
			return a[0];
		return 0;
	}

	// Set first index of array
	void Buffer::setFirst(int value)
	{
		if (freeIndex < Length)
		{
			a[freeIndex] = value;
			freeIndex++;
		}
	}

	// Set selected index of array
	void Buffer::setAt(int pos, int value)
	{
		if (pos < Length)
			a[pos] = value;
	}
}
