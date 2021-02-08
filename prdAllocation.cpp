#include <iostream>
using namespace std;

class paperClip{
    
    //Cannot be accessed by a reference
    private:
    
        int x;
        int y;
        int z;
        
    //Can be accessed by a reference    
    public:
        
        //Default Constructor
        paperClip()
        {
            x = 26;
            y = 27;
            z = 28;
        }
        
        void print()
        {
            cout << "(C) Would You Like Help?" << endl;
        }
        
        //Destructor (Only Manually Called if there is dynamically allocated memory)
        //~paperClip();
};

int main()
{

//---------Working with References---------------------------------------------- 

   cout << "|Working With References|" << endl;
   int a = 6;
   
   //A reference is the equivalent to:
   //int *b = &a;
   //Then deferencing it (*b)
   int &b = a;
   
   cout << "(R) Variable a is: " << a << endl;
   cout << "(R) Variable b is: " << b << endl;
   
  //A reference cannot be reassigned
  //Ex. &b = c;
  //But it can be assigned a new value (ONLY! NO ADDRESSES) via raw value/variable
  int c = 10;
  b = c;
  
  cout << "(R) Variable b is: " << b << endl;
    
  //NOTE: The (&) has different meanings depending on LHS or RHS position
  //A reference can only be used while being DECLARED on the LHS
  int &p = b;
  
  //If the (&) is used on the RHS or anywhere with no declarion then it is
  //The address of that variable. (Used in a EXPRESSION)
  
  //The address of a reference can be known
  cout << "(R) Address of p is: " << &p << endl;
  
//---------Working with Pointers------------------------------------------------

  cout << "|Working With Pointers|" << endl;

  //The (&) used independtly will always refer to an address (Mentioned Above)
  int m = 16;
  cout << "(P) Variable m is: " << &m << endl;

  //The address of a variable/object can be assigned to another variable via pointer
  //NOT LIKE THIS: int n = &m;
  //You need to use a pointer 
  int *n = &m;

  //However if you print the pointer it will print the address it contains
  cout << "(P) Variable n is: " << n << endl;
  
  //You must dereference it using (*) independtly
  cout << "(P) Variable n is: " << *n << endl;
  
  //Unlike References pointers can be re-assigned
  int o = 77;
  n = &o;
  cout << "(P) Variable n is: " << *n << endl;
  
  //NOTE: The (*) operator has a different meaning if its used RHS or LHS
  
  //If (*) is declared then it is a pointer
  int *ab = &o;
  
  //If (*) is used in an expression then it refers to the value pointed to by the pointer variable.
  //i.e LHS or Isolated position
  
  //This way allows for the pointer value to be changed
  *ab = 99;
  cout << "(P) Variable ab is: " << *ab << endl;
  
//---------Working with Classes-------------------------------------------------

  cout << "|Working With Classes|" << endl;
  
  //Classes in C++ can be created in different ways
  
  //The first way is to create a class object in the stack
  paperClip j;
    
  //To access a method or variable from a class (or Struct) the 
  //Dot operator must be used
  j.print();
  
  //The second way is to create a class and allocate it in the heap
  //This is done via (new) 
  paperClip *k = new paperClip();
  
  //(*k) is a pointer pointing to the object on the heap
  //It cannot access the object methods/variables using the dot operator
  //Ex: k.print(); you must derefence the object address assigned to the pointer
  (*k).print();
  
  //However the (->) operator can be used as a shortcut
  k->print();
  
  //Because the object is in the heap the (delete) operator must free the allocated memory
  //Stack objects do not need this as they are deleted once they are out of scope
  delete k;
  
//---------Testing--------------------------------------------------------------  
  
   return 0;
}

//INDEX:
    //-> LHS: Left Hand Side
    //-> RHS: Right Hand Side
