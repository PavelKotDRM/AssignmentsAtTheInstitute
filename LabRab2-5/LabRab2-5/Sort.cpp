#include "Sort.h"

Sort::Sort()
{

}

void Sort::sortMetOne()
{
    int temp; // ��������� ���������� ��� ������ ��������� �������

    // ���������� ������� ���������
    for (int i = 0; i < this->n - 1; i++) {
        for (int j = 0; j < this->n - i - 1; j++) {
            if (this->vec[j] > this->vec[j + 1]) {
                // ������ �������� �������
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
        // � ���������� smallestIndex �������� ������ ����������� ��������, ������� �� ����� � ���� ��������
        // �������� � ����, ��� ���������� ������� � ���� �������� - ��� ������ ������� (������ 0)
        int smallestIndex = startIndex;

        // ����� ���� ������� �������� � ��������� ����� �������
        for (int currentIndex = startIndex + 1; currentIndex < 50; ++currentIndex)
        {
            // ���� �� ����� �������, ������� ������ ������ ����������� ��������,
            if (this->mass[currentIndex] < this->mass[smallestIndex])
                // �� ���������� ���
                smallestIndex = currentIndex;
        }

        // smallestIndex ������ ���������� ������� 
                // ������ ������� ���� ��������� ���������� ����� � ���, ������� �� ����������
        swap(this->mass[startIndex], this->mass[smallestIndex]);
    }
}
