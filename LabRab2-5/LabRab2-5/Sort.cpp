#include "Sort.h"

Sort::Sort()
{

}

void Sort::sortMetOne()
{
    int temp; // временна€ переменна€ дл€ обмена элементов местами

    // —ортировка массива пузырьком
    for (int i = 0; i < this->n - 1; i++) {
        for (int j = 0; j < this->n - i - 1; j++) {
            if (this->vec[j] > this->vec[j + 1]) {
                // мен€ем элементы местами
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
        // ¬ переменной smallestIndex хранитс€ индекс наименьшего значени€, которое мы нашли в этой итерации
        // Ќачинаем с того, что наименьший элемент в этой итерации - это первый элемент (индекс 0)
        int smallestIndex = startIndex;

        // «атем ищем элемент поменьше в остальной части массива
        for (int currentIndex = startIndex + 1; currentIndex < 50; ++currentIndex)
        {
            // ≈сли мы нашли элемент, который меньше нашего наименьшего элемента,
            if (this->mass[currentIndex] < this->mass[smallestIndex])
                // то запоминаем его
                smallestIndex = currentIndex;
        }

        // smallestIndex теперь наименьший элемент 
                // ћен€ем местами наше начальное наименьшее число с тем, которое мы обнаружили
        swap(this->mass[startIndex], this->mass[smallestIndex]);
    }
}
