#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

struct paperClip{
    
    int x = 1;
    int y = 2;
    
};

int main()
{

//---------Dynamic Allocation---------------------------------------------------
    
   //Use the (new) operator to allocate heap memory 
   //Dynamic Array with size of 5
   //arr1 points at a block of memory in the heap
   int *arr1 = new int[5];
   
   cout << "(1) Value of arr1 is: " << arr1[0] << endl;
   cout << "(2) Value of arr1 is: " << *arr1 << endl;
   
   //(delete) used for (new) deletes the value being pointed at
   delete arr1;

   //Malloc allocates memory in the heap
   //Functions similar to (new) however for objects malloc cannot call 
   //the default constructor
   int* arr2;
   int size = 5;
   arr2 = (int *) malloc (sizeof(int) * size);
   
   cout << "(3) Value of arr2 is: " << arr2[0] << endl;
   cout << "(4) Value of arr2 is: " << *arr2 << endl;
   
   //(free) used for (malloc)
   free(arr2);
   
   //This creates a pointer that points to an array of size 5 of type (paperClip)
   //This is allocated in the heap
   paperClip *c = new paperClip[5];
   
   //The method to access the inner values
   cout << "(5) The value of x is: " << c[0].x << endl;
   cout << "(6) The value of y is: " << c->y << endl;
   
   //Delete array (new) deletes all values in the array
   delete[] c;

//---------Static Allocation----------------------------------------------------   
   
   //The ([]) operator is used to allocate a block of memory of a certain size
   //If used statically it will create a block of code on the stack
   //([]) can also dereference without using (*)
   
   //Variable (d) will create a static int array on the stack
   int d[5];
   
   //([]) can also be used with classes/structs
   //This creates an array of 5 of type (paperClip) on the stack
   paperClip b[5];
   
   //The method to access the inner values
   cout << "(7) The value of x is: " << b[0].x << endl;
   
   cout << "(8) The value of y is: " << b->y << endl;
   
//---------Allocation of Pointers-----------------------------------------------

 //Creates an array of pointers of type int on the stack
 int* arr3[3];
 int a = 5;
 
 //Int pointer at position (0) assigned to point to variable a
 arr3[0] = &a;
 
 //(arr[0]) returns an address which must then be dereferenced
 cout << "(9) The value of a is: " << *arr3[0] << endl;

 //Creates an array of pointers type int in the heap
 int **arr4 = new int*[3];
 int cc = 7;
 
 //Int pointer at position (0) assigned to point to variable a
 arr4[0] = &cc;
 
 //(arr[0]) returns an address which must then be dereferenced
 cout << "(10) The value of cc is: " << *arr4[0] << endl;
 
 
   return 0;
}
