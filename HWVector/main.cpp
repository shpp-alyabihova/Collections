#include "hwvector.h"
#include <iostream>

using namespace std;

void foo(HWVector<int>);
void foooo(HWVector<int> &);


int main()
{
    HWVector<int> * first = new HWVector<int>(10, 5);
    cout << first->size() << " " << first->capacity() << endl;

    //first->add(25);

    (*first)[5] = 10;

    for(HWVector<int>::iterator i = first->begin(); i != first->end(); ++i){
        cout << *i << " : ";
    }
    cout << endl;


    HWVector<int> second(10, 3);
    HWVector<int> third;
    if(third.isEmpty()){
        cout << "Empty" << endl;
    }
    else{
        cout << "Oh! No!" << cout;
    }
    third = second;
    cout << third << endl;
    if(third == second){
        cout << "Rabotaet" << endl;
    }

    second[3] = 5;
    second[0] = 0;

    cout << second[10];

    third += second;
    third = third + second;

    cout << third << "second size = " << third.size() << endl;


    if(third.isEmpty()){
        cout << "Empty" << endl;
    }
    else{
        cout << "Oh no!" << endl;
    }
    third[5] = 5;
    third.insert(1, 2);
    third.insert(3, 4);
    third.remove(2);
    third.pop_back();

    HWVector<int> subThird = third.subList(2, 5);

    foo(second);
    foooo(subThird);
    foo(third);

    cout << third << endl;

    return 0;
}


void foo(HWVector<int> copyVector){
    for(HWVector<int>::iterator i = copyVector.begin(); i != copyVector.end(); ++i){
        cout << *i << " : ";
    }
    cout << endl;
}


void foooo(HWVector<int> & refVector){
    cout << "SubList :" << endl;
    for(HWVector<int>::iterator i = refVector.begin(); i != refVector.end(); ++i){
        cout << *i << " : ";
    }
    cout << endl;
}

