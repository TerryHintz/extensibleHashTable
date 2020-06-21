#include "ExtensibleHashTable.h"
#include <iostream>
#include <math.h>

using namespace std;

ExtensibleHashTable::ExtensibleHashTable():ExtensibleHashTable(4){};

ExtensibleHashTable::ExtensibleHashTable(int n):globalDepth(1), size(n){
    hashTable = new Bucket*[2];
    hashTable[0] = new Bucket(n);
    hashTable[1] = new Bucket(n);
};
bool ExtensibleHashTable::find(int val){

};

void ExtensibleHashTable::insert(int val){
    int hashed = hashFunc(val);
    int index = getLastBits(hashed, globalDepth);
    Bucket * bucket = hashTable[index];
    // cout << val << " " << index << endl;
    if(!bucket->isFull()){
        bucket->insert(val);
    } else if (globalDepth == bucket->localDepth){
        cout << endl << endl;
        print();
        cout << endl << endl;
        doubleSize();
        cout << endl << endl;
        cout << "index" << index << endl;
        print();
        cout << endl << endl;
        
        split(bucket, index);
        cout << endl << endl;
        print();
        insert(val);
    } else {
        split(bucket, index);
        insert(val);
    }
};

bool ExtensibleHashTable::remove(int val){

};
void ExtensibleHashTable::print(){
    int size = pow(2, globalDepth);
    for(int i=0; i<size; i++){
        cout << i << ": " << hashTable[i] << " --> ";
        hashTable[i]->print();
        cout << endl;
    }
};

ExtensibleHashTable::~ExtensibleHashTable(){

}

int ExtensibleHashTable::hashFunc(int val){
    return val*val;
}

int ExtensibleHashTable::getLastBits(int val, int depth){
    int n = val & ((1 << depth) - 1);
}

void ExtensibleHashTable::doubleSize(){
    // cout << "double func" << endl;
    int oldBuckets = pow(2, globalDepth);
    int newBuckets = oldBuckets * 2;

    Bucket** newHashTable = new Bucket*[newBuckets];

    for (int i=0; i<oldBuckets; i++) {
        newHashTable[i] = hashTable[i];
    }
    for (int i=oldBuckets; i<newBuckets; i++) {
        newHashTable[i] = new Bucket(size);
    }

    delete[] hashTable;
    hashTable = newHashTable;
    globalDepth += 1;
}

void ExtensibleHashTable::split(Bucket* bucket, int index){
    hashTable[index] = new Bucket(bucket->size);
    hashTable[index]->localDepth = ++bucket->localDepth;
    int oldSize = pow(2, globalDepth-1);
    hashTable[(index+oldSize)]->localDepth++;

    for(int i=0; i<bucket->count; i++){
        int val = bucket->arr[i];
        int hashed = hashFunc(val);
        int index = getLastBits(hashed, bucket->localDepth);
        hashTable[index]->insert(val);
    }

    delete bucket;
}