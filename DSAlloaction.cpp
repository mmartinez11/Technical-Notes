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

//---------Dynamic/Static Allocation--------------------------------------------
    
   //Use the (new) operator to allocate heap memory 
   //Dynamic Array with size of 5
   //arr1 points at a block of memory in the heap
   int *arr1 = new int[5];
   
   delete arr1;//(delete) used for (new)

   //Malloc allocates memory in the heap
   //Functions similar to (new) however for objects malloc cannot call 
   //the default constructor
   int* arr2;
   int size = 5;
   arr2 = (int *) malloc (sizeof(int) * size);
   
   free(arr2);//(free) used for (malloc)
   
   //The ([]) operator is used to allocate a block of memory of a certain size
   //If used statically it will create a block of code on the stack
   //Variable (a) will be a block of memory with 5 int pointers on the stack
   int *a[5];
   
   //Variable (d) will create a static int array on the stack
   int d[5];
   
   //([]) can also be used with classes/structs
   //This creates an array of 5 of type (paperClip) on the stack
   paperClip b[5];
   
   //The method to access the inner values
   cout << b[0].x << endl;
   
   //This creates a pointer that points to an array of size 5 of type (paperClip)
   //This is allocated in the heap
   paperClip *c = new paperClip[5];
   
   //The method to access the inner values
   cout << c[0].y << endl;
   
   //Delete array (new)
   delete[] c;
    
   return 0;
}
