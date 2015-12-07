#include <iostream>
#include "hwpqueue.h"
using namespace std;

void printList(HWPriorityQueue<int>);

int main()
{
   HWPriorityQueue<int> *firstTry = new HWPriorityQueue<int>();
   HWPriorityQueue<int> secondOne;
   HWPriorityQueue<int> second;

   secondOne.enqueue(1, 5);
   cout << "1(5) : " << secondOne << endl;
   secondOne.enqueue(2, 4);
   cout << "1(5), 2(4) : " <<  secondOne << endl;

   secondOne.enqueue(0, 6);
   cout << "1(5), 2(4), 0(6) : " << secondOne << endl;



   secondOne.enqueue(4, 2);
   cout << "1(5), 2(4), 0(6), 4(2) : " << secondOne << endl;

   secondOne.enqueue(5, 1);
   cout << "1(5), 2(4), 0(6), 4(2), 5(1) : " << secondOne << endl;

   secondOne.enqueue(3, 3);
   cout << "1(5), 2(4), 0(6), 4(2), 5(1), 3(3) : " << secondOne << endl;

   second = secondOne;

   if(second.isEqual(secondOne)){
       cout << "Yes!!!" << endl;
   }
    int val = second.dequeue();
    cout << "checking value 5 = " << val << " second 1(5), 2(4), 0(6), 4(2), 3(3) : " << second << endl;
    second.enqueue(7, 0);

    cout << " second 1(5), 2(4), 0(6), 4(2), 3(3), 7(0) : " << second << endl;

    cout << "front  = " << second.front() << " peek = " << second.peek() << " peekPriority = " << second.peekPriority() << endl;


    if(second.isEqual(secondOne)){
        cout << "Yes!!!" << endl;
    }
    else cout << "oh, now((" << endl;

   int value = secondOne.dequeue();
   cout << "value = 5 " << value <<" 1(5), 2(4), 0(6), 4(2), 3(3) : " << secondOne << endl;

   secondOne.dequeue();
   cout << "before printList = 1(5), 2(4), 0(6), 3(3) : " << secondOne << endl;

   printList(secondOne);

   cout << "after printList = 1(5), 2(4), 0(6), 3(3) : " << secondOne << endl;

   if(second != secondOne){
       cout << "Oh, no!" << endl;
   }


    firstTry->enqueue(12, 5);
    cout << *firstTry << endl;

    firstTry->enqueue(10, 3);
    cout << *firstTry << endl;

    firstTry->enqueue(0, 1);
    cout << *firstTry << endl;


    firstTry->enqueue(5, 2);
    cout << *firstTry << endl;


    firstTry->enqueue(11, 4);
    cout << *firstTry << endl;

    firstTry->enqueue(13, 7);
    cout << *firstTry << endl;

    firstTry->enqueue(40, 9);
    cout << *firstTry << endl;


    firstTry->dequeue();
    cout << *firstTry << endl;

    firstTry->dequeue();
    cout << *firstTry << endl;



    while (firstTry->size() > 0) {
        cout << *firstTry << endl;

        firstTry->dequeue();
    }


    cout << second << endl;
    return 0;
}


void printList(HWPriorityQueue<int> secondOne){
    cout << "into printList = " << endl;
    cout << "1(5), 2(4), 0(6) : " << endl;

    while (secondOne.size() > 2) {
        secondOne.dequeue();
        cout << secondOne << endl;
        cout << "1(5), 0(6) : " << endl;
    }
    std::cout << endl << endl << endl;
}
