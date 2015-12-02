#include <iostream>
#include "hwlist.h"
using namespace std;

void printList(HWList<int>);

int main()
{
   HWList<int> *firstTry = new HWList<int>();
   HWList<int> secondOne;
   HWList<int> second;

   secondOne.add_top(1);
   cout << secondOne << endl;

   secondOne.add_back(2);
   cout << secondOne << endl;


   secondOne.add_top(0);
   cout << secondOne << endl;


   secondOne.add_back(3);
   cout << secondOne << endl;


   secondOne.add_back(4);
   cout << secondOne << endl;


   secondOne.add_back(5);
   cout << secondOne << endl;


   second = secondOne;

   if(second.isEqual(secondOne)){
       cout << "Yes!!!" << endl;
   }
    second.pop_back();
    second.add_back(7);

    if(second.isEqual(secondOne)){
        cout << "Yes!!!" << endl;
    }
    else cout << "oh, now((" << endl;

   secondOne.pop_back();
   cout << secondOne << endl;


   second = second + secondOne;
   cout << second << " size = " << second.size() << " [5] -> "<< second[5] << endl;


   secondOne.pop_top();
   cout << secondOne << endl;


   printList(secondOne);

   cout << secondOne << endl;


   if(second != secondOne){
       cout << "Oh, no!" << endl;
   }


    firstTry->add_top(12);
    cout << *firstTry << endl;

    firstTry->add_back(10);
    cout << *firstTry << endl;

    firstTry->add_top(0);
    cout << *firstTry << endl;

    firstTry->add_top(11);
    cout << *firstTry << endl;

    cout << "Operator get 3 possition is equal 10 = " << firstTry->get(3) << endl;
    cout << *firstTry << endl;


    firstTry->insert(3, 15);
    cout << *firstTry << endl;

    firstTry->set(3, 20);
    cout << *firstTry << endl;

    firstTry->remove(2);
    cout << *firstTry << endl;

    firstTry->add_back(13);
    cout << *firstTry << endl;

    firstTry->add_top(40);
    cout << *firstTry << endl;

    firstTry->sort();
    cout << "sorting = " << *firstTry << endl;

    HWList<int> sublist = firstTry->subList(2, 3);
    cout << sublist << endl;
    sublist += 5;
    cout << "Sublist = " << sublist << endl;

    firstTry->pop_top();
    cout << *firstTry << endl;

    firstTry->pop_back();
    cout << *firstTry << endl;


    while (firstTry->size() > 0) {
        cout << *firstTry << endl;
        firstTry->pop_back();
    }


    cout << second << endl;

    std::cout << firstTry->size() << std::endl;
    return 0;
}


void printList(HWList<int> secondOne){
    while (secondOne.size() > 2) {
        secondOne.pop_back();
        cout << secondOne << endl;
    }
    std::cout << endl << endl << endl;
}
