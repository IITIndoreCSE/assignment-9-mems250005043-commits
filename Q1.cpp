
#include <iostream>
using namespace std;
struct Item {
    int id;
    float cost;
    
};


int main() {
    // Write C++ code here
    Item array[6];
    array[0].id=1;
    array[0].cost=60;
    array[1].id=2;
    array[1].cost=30;
    array[2].id=3;
    array[2].cost=75;
    array[3].id=4;
    array[3].cost=15;
    array[4].id=5;
    array[4].cost=0;
    array[5].id=6;
    array[5].cost=0;
    

    
    for (int i = 0; i < 4; i++){
        if (array[i].cost>50){
        cout<<"ID of item : "<<array[i].id<<" , Cost of item : "<<array[i].cost<<endl;
        }
    }
    

    return 0;
}
