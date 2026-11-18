#include <iostream>
using namespace std;

int main() {
    // declare an initialise an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50};

    //Declare a pointer named 'ptr' that points to an integer
    //We asssign it the array name 'numbers'
    //in C++, an array name acts as a pointer to its first element
    //So, ptr now holds the memory address of the numbers[0] (which is 10)
    int* ptr = numbers;

    cout << "Array elements accessed via pointer arithmetic:" << endl;

    //Loop 5 times to acces ech element
    for (int i = 0; i < 5; i++) {

        //*ptr means 'deference' - go to the address stored in ptr and get the value.
        //On the first iteration, this prints 10.
        cout << "Value: " << *ptr << endl;

        //ARITHMETIC: PTR++ increments the pointer.
        //because ptr is an int pointer, it increases the memory address by 4 bytes
        // (the size of an int), moving it to the next element in the array.
        ptr++;
    }

    //Reset the pointer back to the start of the array
    ptr = numbers;

    cout << "\nAccessing using offset arithmetic:" << endl;

    //Another way to use pointer arithmetic: (ptr + i)
    for (int i = 0; i < 5; i ++) {
        //*(ptr + i) i exactly the same as numbers[i]
        //It takes the base address (ptr) and jumps foward by i integers
        cout << "index " << i << " has value: " << *(ptr + i) << endl;
    }

    return 0;
}