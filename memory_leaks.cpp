#include <iostream>
using namespace std;

// A functiom that allocates memory but forgets to delete it
void createLeak() {
    //'new int' allocates memory on the HEAP (dynamic memory) for one integer.
    //It returns the memory address, which we store in 'ptr'.
    int* ptr = new int(42);

    cout << "Inside function. The value is: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    //The LEAK: The function ends here.
    //The local variable 'ptr' is destroyed, but the memory on the heap
    //It was pointing to is NEVE freed. We have lost the address,
    //and the memory is now unreachable but still reserved by the OS.
}

int main() {
    cout <<"Calling function that leaks memory..." << endl;
    createLeak();
    cout << "Function finished. The memory is now leaked." << endl;

    //If we called creatLeak() in a loop a million times,
    //the program would consume giabytes of RAM and crash

    return 0;


}