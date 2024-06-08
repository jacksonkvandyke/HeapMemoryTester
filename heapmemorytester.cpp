#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

size_t heap_memory = 0LL;
int* heap_location = nullptr;

void TestHeap();
void Test100000();
void Test10000();
void Test1000();
void Test100();
void Test10();
void Test1();

//This program allows the user to quickly check how much heap space is available. Note: When testing your heap,
//It will take the Operating System a couple moments to retrieve the space back.

int main(){
    //Start heap loop
    TestHeap();

    return 0;
}

void TestHeap(){
    //This loop continues to realloc heap_location until the heap stack if full
    int heap_stored;
    
    //Test with 100,000 byte allocation
    while(true){
        //Create byte array to use heap memory, reduce size if not enough room
        heap_location = (int *)malloc(heap_memory);
        if (heap_location == nullptr){
            heap_memory -= 1000000;
            Test100000();
            break;
        }else{
            heap_memory += 1000000;
            free(heap_location);
        }

        //Print progress of heap
        cout << "\r" << "Bytes allocated to heap: " << heap_memory;
    }
    
    //Print final storage of heap
    cout << "\n\n" << "Total Bytes Allocated to heap: " << heap_memory;

    return;
}

void Test100000(){
    //This loop continues to realloc heap_location until the heap stack if full
    int heap_stored;

    //Test with 10,000 byte allocation
    while(true){
        //Create byte array to use heap memory, reduce size if not enough room
        heap_location = (int *)malloc(heap_memory);
        if (heap_location == nullptr){
            heap_memory -= 100000;
            Test1000();
            break;
        }else{
            heap_memory += 100000;
            free(heap_location);
        }
        
        //Print progress of heap
        cout << "\r" << "Bytes allocated to heap: " << heap_memory;
    }

    return;
}

void Test10000(){
    //This loop continues to realloc heap_location until the heap stack if full
    int heap_stored;

    //Test with 10,000 byte allocation
    while(true){
        //Create byte array to use heap memory, reduce size if not enough room
        heap_location = (int *)malloc(heap_memory);
        if (heap_location == nullptr){
            heap_memory -= 10000;
            Test1000();
            break;
        }else{
            heap_memory += 10000;
            free(heap_location);
        }
        
        //Print progress of heap
        cout << "\r" << "Bytes allocated to heap: " << heap_memory;
    }

    return;
}

void Test1000(){
    //This loop continues to realloc heap_location until the heap stack if full
    int heap_stored;

    //Test with 10,000 byte allocation
    while(true){
        //Create byte array to use heap memory, reduce size if not enough room
        heap_location = (int *)malloc(heap_memory);
        if (heap_location == nullptr){
            heap_memory -= 1000;
            Test100();
            break;
        }else{
            heap_memory += 1000;
            free(heap_location);
        }

        //Print progress of heap
        cout << "\r" << "Bytes allocated to heap: " << heap_memory;
    }

    return;
}

void Test100(){
    //This loop continues to realloc heap_location until the heap stack if full
    int heap_stored;

    //Test with 10,000 byte allocation
    while(true){
        //Create byte array to use heap memory, reduce size if not enough room
        heap_location = (int *)malloc(heap_memory);
        if (heap_location == nullptr){
            heap_memory -= 100;
            Test10();
            break;
        }else{
            heap_memory += 100;
            free(heap_location);
        }

        //Print progress of heap
        cout << "\r" << "Bytes allocated to heap: " << heap_memory;
    }
    
    return;
}

void Test10(){
    //This loop continues to realloc heap_location until the heap stack if full
    int heap_stored;

    //Test with 10,000 byte allocation
    while(true){
        //Create byte array to use heap memory, reduce size if not enough room
        heap_location = (int *)malloc(heap_memory);
        if (heap_location == nullptr){
            heap_memory -= 10;
            Test1();
            break;
        }else{
            heap_memory += 10;
            free(heap_location);
        }

        //Print progress of heap
        cout << "\r" << "Bytes allocated to heap: " << heap_memory;
    }

    return;
}

void Test1(){
    //This loop continues to realloc heap_location until the heap stack if full
    int heap_stored;

    //Test with 10,000 byte allocation
    while(true){
        //Create byte array to use heap memory, reduce size if not enough room
        heap_location = (int *)malloc(heap_memory);
        if (heap_location == nullptr){
            heap_memory -= 1;
            break;
        }else{
            heap_memory += 1;
            free(heap_location);
        }

        //Print progress of heap
        cout << "\r" << "Bytes allocated to heap: " << heap_memory;
    }

    return;
}