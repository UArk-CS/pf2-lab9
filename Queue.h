//
// Created by Ben Worthington on 3/18/21.
//

#ifndef PF2_LAB9_QUEUE_H
#define PF2_LAB9_QUEUE_H

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

const int QUEUE_SIZE = 10;

class Queue {
public:
    // constructor functions
    Queue();
    ~Queue();

    // general queue operations
    bool IsFull();
    bool IsEmpty();
    void Insert(int number_);
    void Remove(int &number_);
    int Remove();
    int GetLength();
    void Print();

private:
    int Data[QUEUE_SIZE];
    int End;
};


#endif //PF2_LAB9_QUEUE_H
