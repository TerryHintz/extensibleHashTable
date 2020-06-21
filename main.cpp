#include <iostream>
#include "ExtensibleHashTable.h"

using namespace std;

void test1(){
    ExtensibleHashTable temp = ExtensibleHashTable();
    temp.print();
}

void test2(){
    ExtensibleHashTable temp = ExtensibleHashTable();
    temp.insert(1);
    temp.insert(2);
    temp.insert(3);
    temp.insert(4);
    temp.insert(5);
    temp.insert(6);
    temp.insert(7);
    temp.insert(8);
    temp.insert(9);
    temp.print();
}

void test3(){
    ExtensibleHashTable temp = ExtensibleHashTable(3);
    temp.insert(64);
    temp.print();
    cout << endl;
    temp.insert(66);
    temp.print();
    cout << endl;
    temp.insert(200);
    temp.print();
    cout << endl;
    temp.insert(13);
    temp.print();
    cout << endl;
    temp.insert(67);
    temp.print();
    cout << endl;
    temp.insert(218);
    temp.print();
    cout << endl;
    temp.insert(253);
    temp.print();
    cout << endl;
    temp.insert(153);
    temp.print();
    cout << endl;
    temp.insert(109);
    temp.print();
    cout << endl;
}

int main(){
    // test1();
    test3();
    return 0;
}