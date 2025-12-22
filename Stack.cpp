
#include <iostream> 
#include <stdexcept> 

const int INITIAL_CAPACITY = 4;

class Stack {
private:
    int* data;         
    int topIndex;       
    int capacity;        

public:
   
    Stack() {
        data = new int[INITIAL_CAPACITY];
        topIndex = -1;
        capacity = INITIAL_CAPACITY;
    }
    ~Stack() {
        delete[] data;
        data = nullptr;
    }

   
};

int main() {

    return 0;
}
