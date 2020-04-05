#include <iostream>
using namespace std;
 
class A {
 
   public:
      A( int value) : val(value)
      {}  
 
      virtual void print(){
            cout << "Class A: " << val << endl;
      }
 
      int val;
};
 
class B : public A {
 
   public:
      B( int value): A(value), val(value*2)
      {}  
 
      virtual void print(){
            cout << "Class B: " << val  << endl;
      }
 
      int val;
};
 
class C {
 
   public:
      C( int value) : val(value*3)
      {}  
 
      virtual void print(){
            cout << "Class C: " << val  << endl;
      }
      int val;
};
 
int main() {
      
      A* aPtr = new A(1);
      B* bPtr = new B(1);
      C* cPtr = new C(1);
 
      A* aPtr2 = dynamic_cast<A*>(bPtr);
      B* bPtr2 = dynamic_cast<B*>(cPtr);
 
      cout << aPtr2->val << endl;
      aPtr2->print();
 
      cout << bPtr2->val << endl;
      bPtr2->print();
 
      return 0;
}