
#include <iostream>
#include<string>
using namespace std;
struct SalesRecord {
    string month;
    float amount;
    
    
    
};


int main() {
cout<<"Enter sales data for each month"<<endl;
SalesRecord initial[12];

for (int i = 0; i < 12; i++)
{
cout<<"Month "<< i + 1 << " Name:  ";
cin>>initial[i].month;
cout<<endl;
cout<<"Sales Amount: ";
cin>>initial[i].amount;
cout<<endl;

}
int max = initial[0].amount;
int min = initial[0].amount;
string max_month=initial[0].month;
string min_month=initial[0].month;


for (int j = 0; j <12;j++)
{
 if (initial[j].amount>max){max = initial[j].amount; max_month=initial[j].month;}
 else if (initial[j].amount<min){min = initial[j].amount; min_month=initial[j].month;}
}
cout <<"Month with maximum sales: "<<max_month<<" with amount "<<max<<endl;
cout <<"Month with minimum sales: "<<min_month<<" with amount "<<min<<endl;
    return 0;
}
