# Reference 

[`stack overflow discussion`][https://stackoverflow.com/questions/20771210/does-static-polymorphism-make-sense-for-implementing-an-interface]
[`wikipedia`][https://en.wikipedia.org/wiki/Template_metaprogramming#Static_polymorphism]

# benefits

From `wikipedia`:
Template metaprogramming allows the programmer to focus on architecture and delegate to the compiler
the generation of any implementation required by client code. Thus, template metaprogramming can
accomplish truly generic code, facilitating code minimization and better maintainability[citation
needed].

## `not_null`, this will do away all `NULL != ` checking

https://www.bfilipek.com/2017/10/notnull.html

## `unique_ptr` this will do away all manual new/delete

## pImpl method to do away exposed private member

## pure virtual class to do away all implementeation details

## `static` polymorphsim  to do away virtual function cost /indirection, forcing implemenation interface

## rvalue reference && and lvalue reference &

https://www.cprogramming.com/c++11/rvalue-references-and-move-semantics-in-c++11.html

### std::move is actually typecasting/static_cast to convert lvalue to rvalue

This makes it possible it take advantage of a function taking rvalue reference as parameter and
modify the lvalue.

using std::move to change the life scope: we could move the object from outer scope to inner scope.

## Exception Safety 

http://www.drdobbs.com/cpp/object-swapping-part-6-exception-safety/232900528

Following code has rational hiden behind.
```cpp
Thing& operator=(Thing t) {
       swap(t);
       return *this;
}
```
