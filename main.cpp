#include <iostream>
#include "Queue.h"

int main() {

    int num;
    Queue q;

    for (int i = 0; i < 100; i++) {

        int value = rand() % 10;
        q.Insert(3);
        q.Print();
//        q.Remove(num);

    }

    for (int i = 0; i < 100; i++) {

        q.Remove(num);
        q.Print();

    }

    return 0;

}
