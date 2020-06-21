#include "Bucket.h"
#include <iostream>

using namespace std;

Bucket::Bucket():Bucket(4){}

Bucket::Bucket(int n):localDepth(1),size(n), count(0){
    arr = new int [size];
}
bool Bucket::find(int val){
    for(int i=0; i<count; i++){
        if(val == arr[i]){
            return true;
        }
    }
    return false;
}
void Bucket::insert(int val){
    arr[count++] = val;
}
bool Bucket::remove(int val){
    int index = -1;
    for(int i=0; i<count; i++){
        if(val == arr[i]){
            index = i;
        }
    }
    if(index == -1){
        return false;
    }
    for(int i=index+1; i<count; i++){
        arr[i-1] = arr[i];
    }
    count--;
    return true;
}
void Bucket::print(){
    cout << "[";
    for(int i=0; i<size; i++){
        if(i < count){
            cout << arr[i];
        } else {
            cout << "-";
        }
        if(i != size-1){
            cout << ",";
        }
    }
    cout << "] (" << localDepth << ")";
}
bool Bucket::isFull(){
    return count == size;
}