#include <iostream>

void swap(int*, int*);
bool sortArray(int* array, const std::size_t size);
void printArray(int* array, const std::size_t size);

int main()
{
    const std::size_t size = 10;
    int a1[size] = {7,3,8,4,-1,9,1,10,5,2};
    std::cout << "Array before:" << std::endl;
    printArray(a1, size);
    std::cout << "Array after:" << std::endl;
    if (sortArray(a1, size))
        printArray(a1, size);
}

void swap(int* a, int* b)
{
    if (!(a && b))
    {
        std::cout << "Null pointer!" << std::endl;
        return;
    }
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

bool sortArray(int* array, const std::size_t size)
{
    if (!array)
    {
         std::cout << "Null pointer!" << std::endl;
         return false;
    }
    
    for (uint8_t i = 0; i < size - 1 ; ++i)
    {
        for (uint8_t j = i+1 ; j < size ; ++j)
        {
             if (array[i] > array[j])
                 {
                     swap(&array[i], &array[j]);
                 }
        }
    }
    return true;
}


void printArray(int* array, std::size_t size)
{
    if (!array)
        {
            std::cout << "Null pointer!" << std::endl; 
            return;
        }

    for (uint8_t i = 0; i < size; ++i)
        {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
}

