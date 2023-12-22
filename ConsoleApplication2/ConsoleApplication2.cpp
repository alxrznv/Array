#include "array.h"
#include "array.cpp"
//—оздать тип данных, который позвол€ет создавать динамический массив int - ов или double - ов.
// ак пустой, так и c выделенной пам€тью.¬ процессе использовани€ должна быть возможность измен€ть размер, 
//находить максимальный и минимальный элемент, адреса максимального и минимального элемента и присваивать один массив другому.

int main() {
    DynamicArray<int> emptyIntArray;
    DynamicArray<int> intArray(3);
    intArray[0] = 12345;
    intArray[1] = 66;
    intArray[2] = 100501;

    std::cout << "int array size: " << intArray.getSize() << std::endl;
    std::cout << "int array max element: " << intArray.getMaxElement() << std::endl;
    std::cout << "int array max element address: " << intArray.getAddressOfMaxElement() << std::endl;
    std::cout << "int array min element: " << intArray.getMinElement() << std::endl; 
    std::cout << "int array min element address: " << intArray.getAddressOfMinElement() << std::endl;

    intArray.resize(7);
    std::cout << "new size of int array: " << intArray.getSize() << std::endl;

    DynamicArray<double> doubleArray(3);
    doubleArray[0] = 1.01;
    doubleArray[1] = 2.22;
    doubleArray[2] = 3.14;

    std::cout << "Size of array: " << doubleArray.getSize() << std::endl;
    std::cout << "Max element: " << doubleArray.getMaxElement() << " Address: " << doubleArray.getAddressOfMaxElement() << std::endl;
    std::cout << "Min element: " << doubleArray.getMinElement() << " Address: " << doubleArray.getAddressOfMinElement() << std::endl;

    DynamicArray<double> SomeArray;
    SomeArray = doubleArray;
    std::cout << SomeArray[2] << std::endl;
}