// Buffer.h
#pragma once
#include <iostream>
using namespace std;

// Declaration of auxiliary variables and methods for class functioning
namespace BufferArray
{
	class Buffer
	{
	private:
		int* a;
		int Length;
		int freeIndex;
	public:
		Buffer(int Length);
		Buffer();
		virtual ~Buffer();

		virtual void Add(int value);
		int getIndex();
		int Size();
		int getAt(int i);
		int getFirst();
		void setFirst(int value);
		void setAt(int pos, int value);
	};
}