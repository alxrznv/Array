#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <algorithm>

template<class T>
class DynamicArray {
private:
    T* array;
    int size;

public:
    DynamicArray();
    explicit DynamicArray(int size);
    ~DynamicArray();
    T getMaxElement() const;
    T getMinElement() const;
    T* getAddressOfMaxElement() const;
    T* getAddressOfMinElement() const;
    void resize(int newSize);
    DynamicArray& operator=(const DynamicArray& other);


    T& operator[](int index);
    int getSize() const;
};

#endif 
