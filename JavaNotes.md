# Basics 
* Java is a static type language. Which means that they perform type checking at compile time, 
  and they require you to declare the data types of your variables before you use them.
* Java is an object oriented language that revolves around the usage of objects and references.
* Java uses a JVM which allows Java programs to be run in any system.
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
		System.out.println(staticVariable.variable);}
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
