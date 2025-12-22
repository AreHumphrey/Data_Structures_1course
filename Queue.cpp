
#include <iostream>     
#include <stdexcept>     
#include <cstddef>       


const size_t INITIAL_CAPACITY = 4;

class Queue {
private:
    int* data;           
    size_t frontIndex;   
    size_t backIndex;  
    size_t count;       
    size_t capacity;    

public:

    Queue() {
      
        data = new int[INITIAL_CAPACITY];
        frontIndex = 0;
        backIndex = 0;
        count = 0;
        capacity = INITIAL_CAPACITY;
    }

    ~Queue() {

        delete[] data;
        data = nullptr;
    }

    
};


int main() {
   
    return 0;
}
