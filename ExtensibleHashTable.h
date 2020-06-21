#include "Bucket.h"

class ExtensibleHashTable {
    public:
        ExtensibleHashTable();
        ExtensibleHashTable(int);
        bool find(int);
        void insert(int);
        bool remove(int);
        void print();

        ~ExtensibleHashTable();

    private:
        int globalDepth;
        Bucket** hashTable;

        int hashFunc(int);
        int getLastBits(int, int);
        void doubleSize();
        void split(Bucket*, int);
};