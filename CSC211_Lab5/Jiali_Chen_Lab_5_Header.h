/*
Jiali Chen
Lab 5 - Dynamic Array of Strings
In Lab 5, we create a class called 'DynamicStringArray' manipulate and handle its data using pointers, an overloaded = operator, a copy constructor, and a destructor.
*/

#include <iostream>
#include <string>

using namespace std;

class DynamicStringArray {
	string* dynamicArray;
	int size;
	int searchEntry(string) const;
	//POST: Returns index of query if found. Returns -1 if not found.
	//Only used for deleteEntry()

public:
	//CONSTRUCTORS
	DynamicStringArray();
		//When used, object will be initialized with size = 0 and dynamicArray = nullptr
	//COPY CONSTRUCTOR
	DynamicStringArray(DynamicStringArray&);
		//The newly created DynamicStringArray object will contain the exact same dynamicArray and size as the target DynamicStringArray object.
	//DESTRUCTOR
	~DynamicStringArray();
		//When exiting the scope of DynamicStringArray objects, items in the heap will be deleted.

	//METHODS
	int getSize() const;
	void addEntry();
		//POST: Adds new string and increases string size.
	bool deleteEntry();
		//POST: Searches for string input. If found, returns true. If not found, returns false.
	string getEntry() const;
		//POST: Returns string based on user-requested index #. Returns NULL if index not found.
	void printAll() const;

	//OVERLOADED OPERATORS
	DynamicStringArray& operator =(const DynamicStringArray&);
		//PRE: Both objects must be DynamicStringArray type
		//POST: The left-hand operand will contain an exact copy of the right-hand operand's dynamicArray and size.
};

