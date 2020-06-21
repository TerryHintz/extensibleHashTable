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

    temp.remove(253);
    temp.print();
}

void test4(){
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
    bool res = temp.find(0);
    cout << endl;
    cout << res;
    res = temp.find(1);
    cout << endl;
    cout << res;
    res = temp.find(9);
    cout << endl;
    cout << res;
    res = temp.find(10);
    cout << endl;
    cout << res;
}

void test5(){
    ExtensibleHashTable temp = ExtensibleHashTable();
    temp.insert(1);
    bool res;
    res = temp.remove(99);
    cout << res << endl;
    res = temp.remove(1);
    cout << res << endl;
    res = temp.remove(1);
    cout << res << endl;
    cout << endl;
    temp.print();
}

void test6(){
    ExtensibleHashTable temp = ExtensibleHashTable(5);
    temp.insert(1);
    temp.insert(2);
    temp.insert(3);
    temp.insert(4);
    temp.insert(5);
    temp.insert(6);
    temp.insert(7);
    temp.insert(8);
    temp.insert(9);
    temp.insert(10);
    temp.insert(11);
    cout << endl;
    temp.print();
    temp.remove(2);
    cout << endl;
    temp.print();
    temp.remove(10);
    cout << endl;
    temp.print();
    temp.remove(11);
    cout << endl;
    temp.print();
}

void test7(){
    ExtensibleHashTable temp = ExtensibleHashTable(5);
    temp.insert(1);
    temp.insert(1);
}

int main(){
    // test1();
    test7();
    return 0;
}