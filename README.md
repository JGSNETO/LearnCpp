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
