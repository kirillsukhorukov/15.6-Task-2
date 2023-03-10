#include <iostream>
#include <vector>

using namespace std;

//Процедура нахождения двух элементов массива сумма которых равня искомому числу
void find_num(const vector <int>& array, const int &sum, int &i1, int &i2)
{
    int maxSum = 0;
    for (int i = 0; i < array.size()-1; i++)
    {
        for (int j = i+1; j < array.size(); j++)
        {
            if (array[i]+array[j] == sum)
            {
                i1 = i;
                i2 = j;
                return;
            }
        }

    }
}

int main()
{
    //Инициализация вектора с данными
    vector <int> arr = { 15, -209, 2, 1099, -207, -5, 85, 7, 0, 3, -208, 9, 8 };
    //Инициализация индексов искомых чисел и их суммы
    int i1 = 0, i2 = 0, sum=100;
    //Поиск чисел
    find_num(arr,sum,i1,i2);
    //Вывод результата
    std::cout << "Sum=" << sum << "; First number=" << arr[i1] << "; Second number=" << arr[i2] << endl;
    return 0;
}