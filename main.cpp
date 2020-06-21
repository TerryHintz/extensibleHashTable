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
    ExtensibleHashTable temp = ExtensibleHashTable();
    temp.insert(4);
    temp.print();
}

int main(){
    // test1();
    test2();
    return 0;
}