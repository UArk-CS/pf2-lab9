#include <iostream>
#include "Queue.h"

int main() {

    Queue q;
    q.Insert(3);
    q.Insert(1);
    q.Insert(4);
    q.Print();
    q.Insert(1);
    q.Insert(5);
    q.Insert(9);
    q.Print();

    int num;
    q.Remove(num);
    q.Remove(num);
    q.Print();
    q.Remove(num);
    q.Remove(num);
    q.Print();
    q.Remove(num);
    q.Remove(num);
    q.Print();

    return 0;

}
