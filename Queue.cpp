//
// Created by Ben Worthington on 3/18/21.
//

#include "Queue.h"

Queue::Queue()
{
    End = -1;
    for (int i = 0; i < QUEUE_SIZE; i++)
        Data[i] = -1;
}

Queue::~Queue()
{
}

bool Queue::IsFull()
{
    return (End >= QUEUE_SIZE-1);
}

bool Queue::IsEmpty()
{
    return (End < 0);
}

void Queue::Insert(int number_)
{
    // check if full
    if (IsFull())
        cout << "queue overflow\n";

    else
        // insert data
        Data[++End] = number_;
}

void Queue::Remove(int &number_)
{
    // check if empty
    if (IsEmpty())
        cout << "queue underflow\n";

    else
    {
        // remove data
        number_ = Data[0];

        // shift data
        for (int i = 0; i < End; i++)
            Data[i] = Data[i + 1];
        Data[End--] = -1;
    }
}

int Queue::Remove()
{
    int item;
    Remove(item);
    return item;
}

int Queue::GetLength()
{
    return (End+1);
}

void Queue::Print()
{
    cout << End + 1 << " : ";
    for (int i = 0; i <= End; i++)
        cout << setw(2) << Data[i] << " ";
    cout << endl;
}