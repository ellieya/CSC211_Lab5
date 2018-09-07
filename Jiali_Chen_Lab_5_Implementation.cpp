#include "Jiali_Chen_Lab_5_Header.h"

//DONE
DynamicStringArray::DynamicStringArray()
	:size(0), dynamicArray(nullptr)
{
	//Intentionally blank
}

//DONE
DynamicStringArray::DynamicStringArray(DynamicStringArray& target)
	: size(target.size)
{
	//Create new
	dynamicArray = new string[size];

	//Copy into new
	for (int i = 0; i < size; i++) {
		dynamicArray[i] = target.dynamicArray[i];
	}
}

//DONE
DynamicStringArray::~DynamicStringArray() {
	delete[] dynamicArray;
}

//DONE
int DynamicStringArray::getSize() const {
	return size;
}

//MAY NEED MODIFICATION (based on code for = overload)
void DynamicStringArray::addEntry() {
	string userInput, *p = new string[size + 1];

	cout << "Input: ";
	cin >> userInput;

	for (int i = 0; i < size; i++) {
		p[i] = dynamicArray[i];
	}

	//To get correct array index, (size + 1) - 1, in other words, size
	p[size] = userInput;
	size++;

	//delete[] dynamicArray;

	dynamicArray = p;

	// delete[] p; //MAY NOT NEED THIS DUE TO FUNCTION CLEARING AUTOMATICALLY
}

//MAY NEED TO MODIFY ACCORDING TO OVERLOADED
bool DynamicStringArray::deleteEntry() {
	string userInput, *p;
	int index,
		i, //i keeps track of the index number for dynamicArray
		j = 0; //j keeps track of the index number for pointer

	cout << "Input: ";
	cin >> userInput;

	index = searchEntry(userInput);

	if (index == -1) {
		//IF NOT FOUND
		return false;
	}
	else {
		//IF FOUND
		p = new string[size - 1];
		size--;

		for (i = 0; i < size; i++) {
			p[j] = dynamicArray[i];
			if (i != index)
				j++;
		}

		delete[] dynamicArray;
		dynamicArray = p;

		return true;

	}


}

//DONE
string DynamicStringArray::getEntry() const {
	int userInput;

	cout << "Entry #: ";
	cin >> userInput;

	if (userInput > size) {
		return "Error: OUT OF BOUNDS";
	}
	else {
		userInput--; //Adjust to array #
		return dynamicArray[userInput];
	}


}

void DynamicStringArray::printAll() const {
	for (int i = 0; i < size; i++)
		cout << dynamicArray[i] << endl;
}

//DONE
int DynamicStringArray::searchEntry(string query) const {
	for (int i = 0; i < size; i++) {
		if (dynamicArray[i] == query)
			return i;
	}
	//Return -1 when falling out of the loop.
	return -1;
}

DynamicStringArray& DynamicStringArray::operator =(const DynamicStringArray& incomingvalue) {
	string* p;

	//If the incomingvalue's size is not equal to the affected object's size
	if (incomingvalue.size != size) {
		//Then make a new string array with the same size as the incomingvalue's size
		p = new string[incomingvalue.size];
		
		//Now, update the affected object's size
		size = incomingvalue.size;

		//and insert the incomingvalue's information into p
		for (int i = 0; i < size; i++) {
			p[i] = incomingvalue.dynamicArray[i];
		}

		//Now, make dynamicArray equal to p. Both are strings so this should not trigger self-call.
		dynamicArray = p;

		//return address in order to enable chaining
		return *this;

		//p should be automatically deleted upon exiting function scope
	}
}