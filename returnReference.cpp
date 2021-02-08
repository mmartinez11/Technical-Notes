#include <iostream>
using namespace std;

int *curr;

void cons(int* arr)
{
    cout << "Addres stored before: " << curr << endl;
    
    //Pointer (curr) points to the value of pointer (arr)
    //An empty pointer must be assigned an address first
    //i.e curr = *arr //Error
    curr = arr;
    
    cout << "Addres stored after: " << curr << endl;
}

//Returns a reference to the value being returned
//Can only be pointed too by a reference not a pointer
int &methodOne()
{
    //Returns the dereference value of (curr)
    return *curr;
}

int main()
{
  
  //Value  
  int arr = 55;
  
  cout << "Address of arr: " << &arr << endl;
  
  //Assign (curr) to point to the value of (arr)
  cons(&arr);
  
  //A reference can only point to the value being returned if the
  //function has a reference return type
  int& xy = methodOne();
  
  cout << "Address of xy: " << &xy << endl;
  cout << "Value of xy: " << xy << endl;
   
   return 0;
}
