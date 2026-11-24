#include "Sort.h"

Sort::Sort()
{

}

void Sort::sortMetOne()
{
    int temp; // temporary variable for swapping elements

    // Bubble sort
    for (int i = 0; i < this->n - 1; i++) {
        for (int j = 0; j < this->n - i - 1; j++) {
            if (this->vec[j] > this->vec[j + 1]) {
                // swap the elements
                temp = this->vec[j];
                this->vec[j] = this->vec[j + 1];
                this->vec[j + 1] = temp;
            }
        }
    }
}

void Sort::sortMetTwo()
{
    for (int startIndex = 0; startIndex < 50 - 1; ++startIndex)
    {
        // smallestIndex stores the index of the smallest value found in this iteration
        // Initially, the smallest element in this iteration is the first element (index 0)
        int smallestIndex = startIndex;

        // Then search for a smaller element in the rest of the array
        for (int currentIndex = startIndex + 1; currentIndex < 50; ++currentIndex)
        {
            // If an element is smaller than the current smallest element,
            if (this->mass[currentIndex] < this->mass[smallestIndex])
                // remember its index
                smallestIndex = currentIndex;
        }

        // smallestIndex now identifies the smallest element
                // Swap the initial smallest element with the one found
        swap(this->mass[startIndex], this->mass[smallestIndex]);
    }
}
