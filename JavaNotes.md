# Basics 
* Java is a static type language. Which means that they perform type checking at compile time, 
  and they require you to declare the data types of your variables before you use them.
* Java is an object oriented language that revolves around the usage of objects and references.
* Java uses a JVM which allows Java programs to be run in any system.
* Java is strongly typed which means there is a limit to the value of each variable and expression.
* Java always passes by value because it typically pases references which are pointers to dynamically allocated memory.
# Java vs C++
* Unlike C++ you cannot allocate and deallocate memory in the heap or stack manually. It is automatic.
* Java only allows you to inherit once using the "Extend" keyword.
* Java can use libraries like C++ but can also use dependencies via Maven.

# Basic Class

    public class WhiteBoard {
	public static void main(String[] args) {
		System.out.println("Hello World!");}
     }
     
# Static Variable

* A static variable is a variable that is only initialized once (Global), and belongs to the class as a whole.
  What this means is that in every instance of a class will share one static variable since its initialized only once at the start of the execution.
  
* Accessing a static variable...
```
class staticVariable{
	static int variable = 5;
}
public class WhiteBoard {
	public static void main(String[] args) {
		System.out.println(staticVariable.variable);}//Value: 5
}
```
* Example of how multiple objects of a class share the same static variable
```
class staticExample
{
	static int variable = 0;
	
	staticExample(){
		variable++;}
	void showData(){
	      System.out.println("Value of variable is: " + variable);}
}

public class WhiteBoard {
	
	public static void main(String[] args) {
		
		staticExample ref1 = new staticExample(); 
		ref1.showData();//Value: 1
		
		staticExample ref2 = new staticExample(); 
		ref2.showData();//Value: 2
		
	}
}
```
# Static Method
* A method that can be called without needing an object. Can't call non-static variables or methods inside the static method. Use static methods for changing static-variables
or calling a static-method.

* Accessing a Static Method...
```
class staticExample
{
	static int variable = 0;
	
	static void increment()
	{
		variable++;
	}
	
	static void callIncrement()
	{
		increment();
	}
}

public class WhiteBoard 
{
	
	public static void main(String[] args) {
		
		staticExample.increment();//Value: 1
		staticExample.callIncrement();//Value: 2
		
		System.out.println(staticExample.variable);//Value: 2}
			
}
```

# Static Class
* A class can be made static only if it is a nested class. A static nested class may be instantiated without instantiating its outer class. A static class can access only the static members of the outer class. Can contain non static method. In order to call these methods an instance of the nested static class must be made.
* A static nested class may be instantiated without instantiating its outer class.
* Inner classes can access both static and non-static members of the outer class. A static class can access only the static members of the outer class.

```
class OuterClass 
{
    private static String msg = "GeeksForGeeks";
  
    public static class NestedStaticClass 
    {
        public void printMessage(){
            System.out.println(msg);}
    }
}

class Main 
{    
    public static void main(String args[])
    {
        OuterClass.NestedStaticClass printer = new OuterClass.NestedStaticClass();
        printer.printMessage();
     }
}
```

# Final Variable
* A variable that is final cannot be changed after it is declared. Thus making it a constant value.
```
	final int variable = 0; //Cannot be changed 
```

# Final Method
* A method which is declared as final cannot be overridden.
```
final void fnMethod()
{
   	//Cannot be overriden by a child class
}
```

# Final Class
* If a class is declared final then the class cannot be inherited to the subclass. Cannot have a child class.

```
//Cannot be be inherited by a sub class
final class finalExample
{
	final int variable = 0;//Cannot be Changed
	
	final void fnMethod()
	{
		//Cannot be overriden by a child class
	}
}
```
# Abstract Methods
* An abstract method is a method that is declared without an implementation. Only its name, access type, and parameters can be declared.
* If an abstract method is declared then the containing class should be abstract.
*  If a regular class extends an abstract class, then the class must have to implement all the abstract methods of abstract parent class or it has to be declared abstract as well.
```
abstract class abstractExample
{
	abstract void absMethod(int x, int y);	
}

class subClass extends abstractExample{

	@Override
	void absMethod(int x, int y) {
		//Implementation of Abstract Method
	}
}
```

# Abstract Class
* A class which is declared as abstract cannot be instantiated to create objects from it. Can have static methods and final methods along with abstract methods.
* The purpose of an abstract class is to function as a base for subclasses.
* The non-abstract methods of the superclass are just inherited as they are. They can also be overridden, if needed.
```
abstract class abstractExample
{
	final int variable = 5;
	abstract void absMethod(int x, int y);	
	
	void addValues(int y, int z)
	{
		System.out.println(y+z);
	}
}

class subClass extends abstractExample{

	@Override
	void absMethod(int x, int y) {
		
		System.out.println(variable);//Value: 5
		addValues(x, y);//Value: 10
	}
}

class WhiteBoard{
	
	public static void main(String[] args) {
		subClass example = new subClass();
		example.absMethod(example.variable, example.variable);
		
	}
}
```
