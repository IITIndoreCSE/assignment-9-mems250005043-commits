
#include <iostream>
using namespace std;
struct Point {
    float x;
    float y;
    
    
    
};


int main() {

Point initial[7];

for (int i = 0; i < 7; i++)
{
cout<<"Point "<< i + 1 << " - x: ";
cin>>initial[i].x;
cout<<endl;
cout<<"Point "<< i + 1 << " - y: ";
cin>>initial[i].y;
cout<<endl;

}
int count=0;

for (int j = 0; j <7;j++)
{
 if (initial[j].x>0 && initial[j].y>0){count = count + 1;}
}
cout <<"Number of points in the first quadrant: "<<count;

    return 0;
}
