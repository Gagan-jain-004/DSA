#include<iostream>
#include<thread>
using namespace std;

void func1(char symbol) {
    for(int i = 0; i < 100; i++) {
        cout << symbol;
    }
}

void func2() {
    for(int i = 0; i < 100; i++) {
        cout << "-";
    }
}

int main() {
    thread worker1(func1, 'p');
    thread worker2(func2);

    // Ensure main thread waits for worker threads to complete
    worker1.join();
    worker2.join();

    return 0;
}


/* Multi threading is just simply ececuting  the  multiple parts of 
a program at the same time is multithreading as above func1 and func2 are two threads
that will give output like ppppp------ppppppppppppppppp---ppppp
everytime differently as per the speed of the thread  

*/