# CPlus
# C++ for C programmers

- Object orientation is not about flow of control but you should be comfortable with recursion
- Type safety is usually a property of a good OO language
- Garbage collection can be built-in to an OO language or provided for user-defined object

### C++ improvements and advantages
- Different libraries most old C libraries still avaiable 
- Inline replace code macros
- Comment //
- iostream cin>> type safe
- Declaration can be intermixed after executable 
- Use of new (Replace malloc). Memory allocated in heap. 

### C++ is better than C

- More type safe
- More libraries
- Less reliance on preprocessors
- OOV vs imperative 

### New features

- Inline: Key word that modifies the function 
- Const
- static_cast<type>: safe cast
- namespaces
- iostream
- Declarations anywhere including 
- for-statement initialization 
- What is the difference between long and long long and int ? C++ allows for longer integer types starting with a shortest type short
### Swap function

- In C call by reference simulated with pointers.
- C++ has call by reference argument passing.

### Generics 

- Programming using templates 
- C++ Template:
1. Generic programming in C++ was strongly influenced by alex stepanov
2. Much code is the same except for type. If the code can be applied universally there can be a big saving in coding and debugging 
3. Stepanov while at hp in the late 80's developer a set of generic libraries using a construct called a template. STL is largely based on this work

- How to code
1. Prescription: Take a normal function and add template <class t> 
2. Now for type use T when called
3. The compiler uses a signature matching routine to infer what the code should use for type

### Enum

- Originally enum types were created to be a simple type that allowed you to name a small number of named constants as a type. In the early use of enum in C++ the type was an integral type. 

### Generics and functions

- New functions
1. Default parameters, variable agument.
2. Const parameters.
3. Multiple types in a generic. 
4. Operator overloading. 

- Element of the array source are not be modified. Simple parameters, such as size, are typically call by value and can not be modified by the calling routine.
- This concept is called "const correctness"

### Multiple template arguments 

- We have used templates with one template parameter, but it is useful to have more that one distinct type in template.
- More genericity - but be careful. 

### Cast

- More types means worrying about conversions and more signatures
- These static_cast operators are considered safe
- The old operator (type) is deprecated as a reminder the other casting operators are:
1. reinterpret_cast<type> : highly unsafe
2. dynamic_cast<type> : used with classes
3. const_cast<type> : cast away const-ness  

### Graph theory and Algorithms 

- A complete graph: Is a graph in which every edge exist in that graph in that map. 
- Graph as a data structure
1. Connectivity matrix
2. Edge list representation
3. Tradeoffs - graph as an ADT

### Enum 

- Enum: Is a user defined data type which can be assigned some limited values. Small set of realted const.
- E.g: enum first_enum{value1=1, value2=10, value3=20};

### Typedef

- Is a keyword used for aliasing existing data type, user defined data types, and pointers to a more meaningful name. 
- Syntax: typedef <current name> <new name>
- E.g: typedef std::vector<int> vInt;

### Operator overloading

- << left bit shift
- Predence and associativity do not change
- based on binary signature
- Where types are defined for the native type, they remain defined that way, so that can't be changed

### Why add a type ?

- Types are related to domains
- So when you need to talk about widgets-you want the widget type and actions on widgets
- C had primitive forms of type extensibility 

### C type extension 

- In C can "add" a type using struct
- In C++ struct is dfferent - struct is a named scope that can include functions (methods) and have different layers of opacity(data hiding). While C++ retains struct it has the new keyword class
- Class is almost equivalent to struct - but with different hiding defaults

### C++ Point

- Public: Everyone can see
- Private: No one can see
- Protected: The protected keyword specifies access to class members in the member-list up to the next access specifier ( public or private ) or the end of the class definition. Class members declared as protected can be used only by the following: Member functions of the class that originally declared these members.

### ostream 

- Form of operator overloading
- Output stream objects can write sequences of characters and represent other kinds of data. Specific members are provided to perform these output operations 
- ostream operator<< (ostream& out, const point & p){
  out << "(" << p.x << ", " << p.y << ")";
  return out;
  }

- A C++ stream is a flow of data into or out of a program, such as the data written to cout or read from cin. For this class we are currently interested in four different classes:
1.istream is a general purpose input stream. cin is an example of an istream.
2. ostream is a general purpose output stream. cout and cerr are both examples of ostreams.
3. ifstream is an input file stream. It is a special kind of an istream that reads in data from a data file.
4. ofstream is an output file stream. It is a special kind of ostream that writes data out to a data file.

  ### C++ and OO
  
  - Every class object has the implicit pointer. Keyword 'this' associate with it.
  - Multiple contructors: It is useful to have multiple ways to initialize an object. 
  
  ### Constructors:
  
  - Initialize
  - Convert
  - Allocate 
  - Can check for correctness
  
  ### Memory management
  
  - new-allocator
  - delete-deallocator
  - Both work with a heap. Heap is dynamically allocated memory. 
  
  ### Destructor
  
  - Deallocator when item goes out of scope.
  - Syntax within class ~classname(){...}
  - Typical use if for calling delete to deallocate to th heap. 

  ### Null pointer 
  
  - The zero value is the null pointer value
  - Recall it is important in list to test for null. They are used as sentinel values.
  - c++11 - list_element* ptr = nullptr;
  - new keyword - type safe 
  
  ### Deep vs shallow copy
  
  - Shallow: In shallow copy, an object is created by simply copying the data of all variables of the original object.
  - Deep: An object is created by copying data of all variables, and it also allocates similar memory resources with the same value to the object.
  
  - First we will examine the copy constructor. We want to build an equivalent list, that is a "deep" copy. 
  - A "Shallow" copy would be a referential copy where the new list head would be the same as the old list head.
  - Shallow copy is a highly efficient form of copying but has a more limited utility than a deep copy.
  
  ### Destructor
  
  - Similar to free method in C

  ### Dynamic structures in STL
  
  - The standard template library has the following data structures avaiable and you are free to use them in your problem:
  - #include <vector>: Vector is the most used - it is nearly efficient as array and is safer and expandable 
  - #include <list> : gets you a double linked lists

  ### Minimum Spanning Tree
  
  - A spanning tree is a set of edges within the graph that connects all the nodes and where there is no cycle. 
  
  ### Overloading & Function selection 
  
  - Futher c++ ideas: operator overloading and friend functions 
  - OOP principles: User defined types should be undistinguishable from native types
  - Operator overloading and conversion allow us to implement this principle 
  - Implicit conversion: s=d;
  - Explicit conversion: s=int(d);
  - C++ 11: Explicit keyword in front of a constructor of one argument turns off its ability to be used implicity for conversion 
  - Friend functions: having access to their private parts

  ### Standard Template Library
  
  - Containers(vector, list, map) + Algorithms(Sort, permute) + iterators(Forward, backward) 
  
  ### Vector methods
  
  - v.size(): get current size
  - v.resise(int size): resize the vecto
  - Constructor: vector<T> v: empty sequence
  - vector<T> v(n): Size n with a default construstructor T() called for each element
  - vector<T> v(n, value): value is of type T
  
  ### Iterators category
  
  - In STL there are 5 different iterators categories:
  1. Input(weakest): Read, single pass. The input iterator must allow the elements to be searched in a forward direction one-by-one. This requires that operator++ be defined and dereferencing operator *. 
  2. Output: Write, single pass
  3. Foward, read and write: multipass 1D
  4. Bidirectional: multi-pass + 2 directions
  5. Random access (strongest) anywhere
  
  - In STL the design principle is to use the weakest iterator that accomodates the most efficient algorithm.
  - Quicksort requires random access. As a consquence it cannot be used on a non-random access container such as list. 


# An Odyssey of C++

- C++ is a compiled language. Which means that the compiler processes source code and produces object files. 
- Linker combines the object file to an exe file.
- Source file ->Compiler->ObjectFile->Link(Standard Library)->Exe File
- Core language features(Standardized programming Language):
1. Built-in types: int and unsigned char
2. Conditional Statements: if and switch
3. Loop: For, While
- Standard-Library: 
1. Collection types: std::vector and std::map
2. I/O Operations

## History

### Pre-Modern C++
- C++98: 1998
- C++03: 2003
- C++TR1: 2007
### Modern C++
- C++11: 2011
- C++14: 2014
- C++17: 2017
- C++20: 2020
- C++23: 2023

### About the Language

- Compiled, Standardized and statically typed. 
- The operating system starts the C++ program by running main
- Curly braces (chaves) express grouping in C++
- // Starts a coment 
- List of comands to compile and run:
1. g++ -o progname.cpp
2. ./progname

### Functions 

- Return type
- Name
- List of zero or more *parameters*, specified in a comma-separated list surrounged by parantheses
- Body - aka function body
1. The actions that the function performs 
2. The behavior of the function

- Function declaration
```
int factorial(int);
```
- Function usage - function call
```
int main(){
  int f6 = factorial(6);
  std::cout << "Factorial of 6 is " << f6 << std::endl;
}
```
```
- Function definition:
int factorial(int n){
  int result = 1;
  while(n>0){
    result = result * n;
    n = n - 1;
  } 
}
```

### Function Overloading

- Several functions may be defined with the same name - aka as function overloading. 
```
#include <iostream>
#include <string>

void print(int);
void print(double);
void print(std::string);

int main(){
  print(6);
  print(3.14);
  print("C++ is fun!");
}

void print(int i){std::cout << "i=" << i << std::endl;}
void print(double d){std::cout << "d=" << d << std::endl;}
void print(std::string s){std::cout << "s= " << s << std::endl;}
``` 

### Types, Variables and Atithmetic

- Built-in types: Char, Int and Double
- User defined data types: std::string, std::vector
- Syntax:

```
var_type var_name
```

- A declaration is an statement introducing a named entity of a specific type into the program:
1. A type defines a set of possible values and a set of operations 
2. An object is some memory holding a value of some type
3. A value is a set of bits interpreted according to a type
4. A variable is a samed object 

- An object of a fundamental type has a fixed size in memory

- Arithmetic operations
1. Plus: x+y
2. Unary Plus: +x
3. Minus: x-y
4. Unary Minus:-x
5. Multiply: x*y
6. Divide: x/y
7. Module: x%y

- Comparison Operations. All operations evaluated to bool.
1. Equal: x==y
2. Not Equeal: x!=y
3. Less than: x<y
4. Less than or equal: x<=y
5. Greater than: x > y
6. Greater than: x>=y

- Logical Operations.
1. Logical and: x&&y
2. Logical or: x||y
3. Logical not: !x

- Bitwise operations.
1. Bitwise And: x&y
2. Bitwise Or: x|y
3. Bitwise exclusive or: x^y
4. Bitwise complement:
5. Bitwise shift left:x<<n
6. Bitwise shift right:x>>n

### Initialization

- Implict conversion x Implicit Initialization
- Auto: the type of an object can be ommitted, and be derived from its initialization value´s type.
1. Do not use when you want be explicit about an object´s precision(float/double).
2. Making a variable´s type clearly visibly.

### Scope

- Any name, typically a variable defined has a scope:
1. Local: inside a function
2. Global: not inside a function

### Constant 

- const: After definition of a const var, the compiler enforces it will not be changed. 
- constexor: Specifies constants, to accomplish placement of data in read-only memory, to prevent corruption, improve performance and save usage of RAM. 

### Arrays, Pointers and Reference 
- An array is a container of elements of a single type. Its elements are accessed by position. Offers better run-time performance due to its fixed size. An array has fixed size, elements cannot be added. 

```
type array_name[size]
```

- Pointer is declared according to:
```
type* pointername
```
- P is a variable of type "pointer to" integer. 
- Holds the address of an object of type defined. 
```
Address: p = &a
Value: *p = value
```
- Reference is declared according to:
``` 
type& r = a[2]
```
- r is a variable of type "reference to" integer &
- Refers to an object of type int 
- Must always be bound to an object. 

### Basic I/O: Introduce iostream libray

- The stdio-library from C are only able to handle the fundamental types.
- C++ iostream library facilitates streaming of user-defined types.
- The safe C++ way:
``` 
std::cin>>
std::cout<<
```
- The std namespace also contains the error logging instances:
1. cerr: Unuffered
2. clog: buffered
- Both objects also of type std::ostream connected to standard error
- Output stream operator: << or the insertion operator 
- When we use: using namespace std; The cons of using this way is that we make everything in the namespace avaiable without qualification.
- Can be hard to determine the origin of an identifier. 
- Input stream operator: >>

### Unittest 
- Unittest is a method by which:
1. Individual units of source code
2. Sets of one or more computer program modules together with associated control data
3. Usage procedures
4. Operating procedures

- The unittest is regarded the smallest testable part of an application 
### Enumerations

- A type that holding a set of integer values specified by the user.
```
enum class Color {Red, Green, Blue};
```
- Specifies an enumeration named color with the enumarators, Red, Green and Blue.
- With the integer values 0, 1 and 2 respectively
  
### Classes 

- A user-defined type demands a tighter connection between its data and operations
1. The data representation shall be inaccessible to users in order to guarantee its consistent usage 
2. We distinguish between:
- The interface to a type: To be used by others 
- The implementation: Which has access to the otherwise inaccessible data
- We call this class

- A class can define a set of members of different kinds like:
1. Data: aka members variables 
2. Function: aka method or operation
3. Type: nested type

### This

- In C++ the 'this' pointer is special pointer that is automatically avaiable within non-static member functions of a class. It points to the object instance on which the member functio is being called. 

Here are a few key points to understand about the 'this' pointer:
1. 'this is keyword in C++ reserved that represents a constant pointer to the current object. It is implicity avaiable within non-static member functions. 
2. Pointer to the current object: The 'this' pointer holds the memory address of the current object instance. It allows you to access the member variables and member functions of the current object within the member functions of the class.
3. Implicit usage: You dont need to explicity pass or use 'this' as a parameter in member functions. It is automatically available, and you can access the member variables and member functions using the '.'(dot) operator with 'this' pointer. 
4. Disambiguating members variables: The 'this' pointer is particylarly useful when you have a local variable or a function parameter with the same name as a member variable. In such cases, using 'this' allows you to refer to the member variable specifically disambiguating it from the local variable or parameter.
5. Const member functions: In const member functions(functions declared with the 'const' qualifier) the 'this' pointer is treated as a pointer to a constant object. This emans that you can only call const member functions and access const-qualified member variables though the 'this' pointer within a const member function

```
class MyClass {
private:
    int myVariable;

public:
    void setVariable(int value) {
        this->myVariable = value; // Accessing member variable using this pointer
    }

    void printVariable() const {
        std::cout << "My variable value: " << this->myVariable << std::endl; // Accessing member variable in a const member function
    }
};
```
