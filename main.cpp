#include <iostream>
#include "Queue.h"

int main() {

//    Old code
//    int num;
//    Queue q;

//    for (int i = 0; i < 100; i++) {

//        int value = rand() % 10;
//        q.Insert(3);
//        q.Print();
//        q.Remove(num);

//    }

//    for (int i = 0; i < 100; i++) {

//        q.Remove(num);
//        q.Print();

//    }

//    return 0;

    int NumLines = 6;
    int NumCustomers = 36;
    int CurrentTime = 0;
    Queue *Vendor = new Queue[NumLines];

    // Add customers to different queues
    for (int Customer = 0; Customer < NumCustomers; Customer++)
    {
        // Generate customer data
        CurrentTime += 5 + random() % 20;
        int NumItems = 1 + random() % 5;

        // Search for shortest queue
        int ShortLine = 0;
        int ShortLength = Vendor[0].GetLength();
        for (int Line = 1; Line < NumLines; Line++)
        {
            int Length = Vendor[Line].GetLength();
            if (Length < ShortLength)
            {
                ShortLine = Line;
                ShortLength = Length;
            }
        }

        // Add customer to shortest line
        Vendor[ShortLine].Insert(NumItems);
        Vendor->Print();

        int probabilityToLeave = random() % 100;

        if (probabilityToLeave <= 19 && probabilityToLeave >= 0) {
            Vendor[ShortLine].Remove();
        }

    }

    for (int line = 0; line < NumLines; line++) {

        while (!Vendor[line].IsEmpty()) {

            int probability = random() % 100;

            if (probability <= 19 && probability >= 0) {

                Vendor[line].Remove();

            }

        }

    }

    // Print all customer lines
    for (int Line = 0; Line < NumLines; Line++)
    {
        cout << "Line " << Line << " ";
        Vendor[Line].Print();
    }

    cout << endl;

    return 0;

}
