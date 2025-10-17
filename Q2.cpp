

#include <iostream>
using namespace std;
struct Color {
    int red;
    int green;
    int blue;
    
    
};


int main() {
 Color arr[5];
 
 arr[0].red=220;
 arr[0].green=20;
 arr[0].blue=60;
 arr[1].red=30;
 arr[1].green=80;
 arr[1].blue=70;
 arr[2].red=100;
 arr[2].green=150;
 arr[2].blue=180;
 arr[3].red=200;
 arr[3].green=210;
 arr[3].blue=160;
 arr[4].red=170;
 arr[4].green=160;
 arr[4].blue=10;
 
 for (int i = 0; i < 3; i++){
     
  arr[i].red=255-arr[i].red  ; 
  arr[i].green=255-arr[i].green   ;
  arr[i].blue=255-arr[i].blue  ;
     
     
 }
 
 for (int j = 0; j < 5; j++){
     
     
     cout << "Element "<<j+1<<" : "<<"Red = "<<arr[j].red<<", Green = "<<arr[j].green<<", Blue = "<<arr[j].blue<<endl;
     
 }

    return 0;
}
