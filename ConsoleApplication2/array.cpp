#include "array.h"

template<class T>
DynamicArray<T>::DynamicArray() : array(nullptr), size(0) {}

template<class T>
DynamicArray<T>::DynamicArray(int size) : size(size) {
    array = new T[size];
}

template<class T>
DynamicArray<T>::~DynamicArray() {
    delete[] array;
}

template<class T>
T DynamicArray<T>::getMaxElement() const {
    T maxElement = array[0];
    for (size_t i = 0; i < size; ++i) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    return maxElement;
}

template<class T>
T DynamicArray<T>::getMinElement() const {
    T minElement = array[0];
    for (size_t i = 0; i < size; ++i) {
        if (array[i] < minElement) {
            minElement = array[i];
        }
    }
    return minElement;
}

template<class T>
T* DynamicArray<T>::getAddressOfMaxElement() const {
    T* maxAddress = nullptr;
    T maxElement = array[0];
    for (int i = 0; i < size; ++i) {
        if (array[i] > maxElement) {
            maxElement = array[i];
            maxAddress = &array[i];
        }
    }
    return maxAddress;
}

template<class T>
T* DynamicArray<T>::getAddressOfMinElement() const {
    T* minAddress = nullptr;
    T minElement = array[0];
    for (size_t i = 0; i < size; ++i) {
        if (array[i] < minElement) {
            minElement = array[i];
            minAddress = &array[i];
        }
    }
    return minAddress;
}

template<class T>
void DynamicArray<T>::resize(int newSize) {
    T* newArray = new T[newSize];
    int minSize = (newSize < size) ? newSize : size;
    for (int i = 0; i < minSize; i++) {
        newArray[i] = array[i];
    }

    delete[] array;

    array = newArray;
    size = newSize;
}

template<class T>
DynamicArray<T>& DynamicArray<T>::operator=(const DynamicArray& other) {
    if (this != &other) {
        delete[] array;
        size = other.size;
        array = new T[size];
        std::copy(other.array, other.array + size, array);
    }
    return *this;
}


template<class T>
T& DynamicArray<T>::operator[](int index) {
    return array[index];
}


template<class T>
int DynamicArray<T>::getSize() const {
    return size;
}