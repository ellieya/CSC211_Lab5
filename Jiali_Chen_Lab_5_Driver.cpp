#include "Jiali_Chen_Lab_5_Header.h"

int main() {
	DynamicStringArray a;
	DynamicStringArray b;

	//Show sizes of a and b
	cout << "a's size is " << a.getSize() << '.' << endl;
	cout << "b's size is " << b.getSize() << '.' << endl;

	//Add 3 entries to a
	cout << "\n!!! ADDING ENTRIES TO A !!!" << endl;
	a.addEntry();
	cout << "\na's size is " << a.getSize() << '.' << endl;

	cout << "\n!!! ADDING ENTRIES TO A !!!" << endl;
	a.addEntry();
	cout << "\na's size is " << a.getSize() << '.' << endl;
	
	cout << "\n!!! ADDING ENTRIES TO A !!!" << endl;
	a.addEntry();
	cout << "\na's size is " << a.getSize() << '.' << endl;

	//Show all of a
	cout << "\nPRINTING ALL ENTRIES OF A" << endl;
	a.printAll();

	//Make b = a

	cout << "\n!!! MAKING B EQUAL TO A !!!" << endl;
	b = a;

	//Show all of a
	cout << "\nPRINTING ALL ENTRIES OF A" << endl;
	a.printAll();

	//Show all of b
	cout << "\nPRINTING ALL ENTRIES OF B" << endl;
	b.printAll();

	//Delete entry of a
	cout << "\n!!! DELETING ENTRY FROM A !!!" << endl;
	if (a.deleteEntry())
		cout << "FOUND. DELETED." << endl;
	else
		cout << "NOT FOUND." << endl;
	cout << "a's size is " << a.getSize() << '.' << endl;

	//Delete entry of a
	cout << "\n!!! DELETING ENTRY FROM A !!!" << endl;
	if (a.deleteEntry())
		cout << "FOUND. DELETED." << endl;
	else
		cout << "NOT FOUND." << endl;
	cout << "a's size is " << a.getSize() << '.' << endl;

	//Show all of a
	cout << "\nPRINTING ALL ENTRIES OF A" << endl;
	a.printAll();

	//Show all of b
	cout << "\nPRINTING ALL ENTRIES OF B" << endl;
	b.printAll();

	//Copy b into c
	cout << "\n!!! CREATING OBJECT C AND COPYING B INTO C !!!" << endl;
	DynamicStringArray c(b);

	//Show all of b
	cout << "\nPRINTING ALL ENTRIES OF B" << endl;
	cout << "b's size is " << b.getSize() << '.' << endl;
	b.printAll();

	//Show all of c
	cout << "\nPRINTING ALL ENTRIES OF C" << endl;
	cout << "c's size is " << c.getSize() << '.' << endl;
	c.printAll();

	//Get entry of c
	cout << "\nGET ENTRY OF C" << endl;
	cout << c.getEntry() << endl;

	//Get entry of c
	cout << "\nGET ENTRY OF C" << endl;
	cout << c.getEntry() << endl;

	//Get entry of c (fail)
	cout << "\nGET ENTRY OF C (FAIL)" << endl;
	cout << c.getEntry() << endl;

	//Testing chain
	cout << "\n!!! MAKING B EQUAL TO A, THEN C EQUAL TO B !!!" << endl;
	c = b = a;

	//Show all of a
	cout << "\nPRINTING ALL ENTRIES OF A" << endl;
	cout << "a's size is " << a.getSize() << '.' << endl;
	a.printAll();

	//Show all of b
	cout << "\nPRINTING ALL ENTRIES OF B" << endl;
	cout << "b's size is " << b.getSize() << '.' << endl;
	b.printAll();

	//Show all of c
	cout << "\nPRINTING ALL ENTRIES OF C" << endl;
	cout << "c's size is " << c.getSize() << '.' << endl;
	c.printAll();


	return 0;
}


/*

* * * * * * * * * * * * * * * * * * * * * * * * * * * * *
OUTPUT
* * * * * * * * * * * * * * * * * * * * * * * * * * * * *
a's size is 0.
b's size is 0.

!!! ADDING ENTRIES TO A !!!
Input: t1

a's size is 1.

!!! ADDING ENTRIES TO A !!!
Input: t2

a's size is 2.

!!! ADDING ENTRIES TO A !!!
Input: t3

a's size is 3.

PRINTING ALL ENTRIES OF A
t1
t2
t3

!!! MAKING B EQUAL TO A !!!

PRINTING ALL ENTRIES OF A
t1
t2
t3

PRINTING ALL ENTRIES OF B
t1
t2
t3

!!! DELETING ENTRY FROM A !!!
Input: t3
FOUND. DELETED.
a's size is 2.

!!! DELETING ENTRY FROM A !!!
Input: t4
NOT FOUND.
a's size is 2.

PRINTING ALL ENTRIES OF A
t1
t2

PRINTING ALL ENTRIES OF B
t1
t2
t3

!!! CREATING OBJECT C AND COPYING B INTO C !!!

PRINTING ALL ENTRIES OF B
b's size is 3.
t1
t2
t3

PRINTING ALL ENTRIES OF C
c's size is 3.
t1
t2
t3

GET ENTRY OF C
Entry #: 3
t3

GET ENTRY OF C
Entry #: 1
t1

GET ENTRY OF C (FAIL)
Entry #: 4
Error: OUT OF BOUNDS

!!! MAKING B EQUAL TO A, THEN C EQUAL TO B !!!

PRINTING ALL ENTRIES OF A
a's size is 2.
t1
t2

PRINTING ALL ENTRIES OF B
b's size is 2.
t1
t2

PRINTING ALL ENTRIES OF C
c's size is 2.
t1
t2
Press any key to continue . . .

*/