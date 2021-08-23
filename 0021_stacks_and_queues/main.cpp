#include <iostream>
#include <stack>
#include <queue>

class Test {
private:
    std::string name;

public:
    Test(std::string name) : name(name) {}

    ~Test() {
        //std::cout << "Object destroyed" << '\n';
    }

    void print() {
        std::cout << name << '\n';
    }
};

int main() {

    // can take the usual types including custom objects
    std::stack<Test> testStack;
    // last in first out - LIFO  / pile of objects


    testStack.push(Test("Mike")); // when we add objects, we destroy the original and we create a shallow copy of it
    testStack.push(Test("John"));
    testStack.push(Test("Sue"));

    std::cout << '\n';

    /*
    * This is invalid code, object gets destroyed!
    Test &test1 = testStack.top(); // if we want to be really efficient we want to '&' , so we dont have to make a copy of it anymore
    testStack.pop(); // we remove an object and discard it
    test1.print(); // reference refers to destroyed object!!!
    */

    // iterating through the stack - removing objects
   while(testStack.size() > 0) {
       Test &test = testStack.top();
       test.print();
       testStack.pop(); // when we pop, the one we added before that gets to the top
       // and when we pop that we get the one we added first
   }


   std::cout << '\n';
   // ------------------ //


   // first in first out - FIFO
   // first person who enters the queue, first person who leaves the queue
   std::queue<Test> testQueue;

   testQueue.push(Test("Mike"));
   testQueue.push(Test("John"));
   testQueue.push(Test("Sue"));

   std::cout << '\n';

   // back of the queue
   testQueue.back().print();

   while(testQueue.size() > 0) {
       Test &test = testQueue.front(); // using front
       test.print();
       testQueue.pop(); // pop here removes from the front
   }


    return 0;
}
