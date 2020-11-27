#include <cstdio>

/*Перегрузка операции индексирования [], её константный и неконстантный варианты.
Обобщение индекса и многомерные массивы.*/

/*Вот перегрузка оператора, чтобы была константная и не константная версия. Суть в том, что я объявил две переменные, но одна из них получает значение по ссылке.
Таким образом, компилятор в первом случае прицепит вызов "константной" версии, а во втором по ссылке.
Можно заметить по выходным данным, что поменяется только последний элемент массива, т.к. он был получен по ссылке*/
static const int SIZE = 8;

class Vector {
protected:
    int buffer[SIZE];

public:
    Vector() {
        for (int i = 0; i < SIZE; i++) {
            buffer[i] = 0;
        }
    }
    int operator   [](int i) const    {return buffer[i];}
    int & operator [](int i)          {return buffer[i];}
};

int main() {
    Vector v;
    int value = v[0];
    int & const_value = v[7];

    value = 256;
    const_value = 256;

    for (int i = 0; i < SIZE; i++) {
    cout << "\n" << v[i]<< endl;
    }
    cout << "\n";

    return 0;
}
