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
