#include <iostream>
#include "AppendableArray.h"

AppendableArray::AppendableArray(int c) {
	this->count = c;
	this->arr = new int[this->count];

	for (int i = 0; i < this->count; i++)
		this->arr[i] = 0;

}



AppendableArray::AppendableArray(int * a, int sz)
{
	this->count = sz;
	this->arr = new int[this->count];

	for (int i = 0; i < this->count; i++)
		this->arr[i] = a[i];
}



void AppendableArray::append(int item) {
	int * temp = new int[this->count];

	for (int i = 0; i < this->count; i++)
		temp[i] = this->arr[i];

	this->count++;
	this->arr = new int[this->count];
	for (int i = 0; i < this->count - 1; i++)
		this->arr[i] = temp[i];

	this->arr[this->count - 1] = item;
}



void AppendableArray::append(AppendableArray & a) {
	int othersLen = a.len();
	int * temp = new int[this->count];
	for (int i = 0; i < this->count; i++)
		temp[i] = this->arr[i];

	int totalLen = this->count + othersLen;
	this->arr = new int[totalLen];
	for (int i = 0; i < this->count; i++)
		this->arr[i] = temp[i];

	for (int i = this->count, j = 0; i < totalLen; i++, j++) {
		this->arr[i] = a.index(j);
	}

	this->count = totalLen;
}



void AppendableArray::display() {
	std::cout << "\n\tarray[ ";
	for (int i = 0; i < this->count; i++) {
		std::cout << this->arr[i]; 
		(i < this->count - 1) ? 
			std::cout << ", " : 
			std::cout << " ]\n\n";
	}
}



int AppendableArray::index(int i) {
	return this->arr[i];
}



int AppendableArray::len() {
	return this->count;
}
