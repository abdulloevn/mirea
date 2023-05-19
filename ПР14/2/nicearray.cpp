#include "nicearray.h"

nicearray::nicearray(int Size)
{
    size = Size;
    array = new int[size]();
}

nicearray::~nicearray()
{

}

bool nicearray::add(int num, int idx)
{
    try {
        if (idx < 0 || size <= idx)
        {
            throw std::range_error("Could not insert at idx: out of range");
        }
        array[idx] = num;
        return true;
    }
    catch (std::range_error& e)
    {
        std::cout << e.what() << std::endl;
        return false;
    }
}

int nicearray::get(int idx)
{
    try {
        if (idx < 0 || size <= idx)
        {
            throw std::range_error("Could not read at idx: out of range");
        }
        return array[idx];
    }
    catch (std::range_error& e)
    {
        std::cout << e.what() << std::endl;
        return 0;
    }
}

void nicearray::show()
{
    std::cout << "[";
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << ", ";
    }
    std::cout << "]" << std::endl;
}
