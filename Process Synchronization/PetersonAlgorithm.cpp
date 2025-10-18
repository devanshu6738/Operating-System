#include <iostream>
#define N 2
using namespace std;

int turn;
int interested[N];
void Enter_Region(bool Process){
    int other;
    other=1-Process;
    turn=Process;
    while(interested[other]==true && turn==Process);
}

void leave_Region(bool Process){
    interested[Process]=false;
}
int main(){
    Enter_Region(0);
    cout<<"Critical Section";
    leave_Region(0);
}

// me satisfied
// progess satisfied
// bound waiting satisfied
