#include <cstdio>

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
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
