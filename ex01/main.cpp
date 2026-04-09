#include "iter.hpp"

void print(int a) {
    std::cout << a << std::endl;
}

void increment(int &a) {
     a++;
}

int main() 
{
    int arr[] = {1,2,3,4,5};

    std::cout << "###Print array###" << std::endl;
    ::iter(arr, 5, print);
    ::iter(arr, 5, increment);
    std::cout << "###Print array after increment###" << std::endl;
    ::iter(arr, 5, print);

    return 0;
}