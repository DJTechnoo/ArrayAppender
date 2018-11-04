#pragma once

class AppendableArray {

private:
	int * arr;
	int count;

public:
	AppendableArray(int c = 10);
	AppendableArray(int * a, int sz);
	void append(int item);
	void append(AppendableArray & a);
	void display();
	int index(int i);
	int len();
};
