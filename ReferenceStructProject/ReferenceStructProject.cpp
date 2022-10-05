#include <iostream>


void ArrayInit(int* array, int size)
{
    for (int i = 0; i < size; i++)
        array[i] = i + 1;
}

void myswap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}


struct Person
{
    char name[50];
    int age;

    Person* parent;
};


int main()
{
    /*int x = 10;
    int y = 20;

    std::cout << x << " " << y << "\n";

    myswap(x, y);
    std::cout << x << " " << y << "\n";*/

    /*int* array = new int[10];
    ArrayInit(array, 10);*/
}
