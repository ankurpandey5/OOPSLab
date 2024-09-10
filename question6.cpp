#include<iostream>
using namespace std;
class Hotel{
    private:
        string name;
        int roomNumber;
        float perDayCharge;
        int totalDays;
        double calculate(float perDayCharge,int totalDays ){
            double answer= perDayCharge * totalDays;
            if(answer > 10000){
                answer = 1.05*answer;
            }
            return answer;
        }
    public:
        double checkIn(string name,int roomNumber,float perDayCharge,int totalDays){
            this->name = name;
            this->roomNumber = roomNumber;
            this->perDayCharge = perDayCharge;
            this->totalDays = totalDays;
            double totalAmount = calculate(perDayCharge,totalDays);
            return totalAmount;
        }
        void checkOut(double totalAmount){
            cout<<totalAmount<<endl;
        }
};
int main(){
    Hotel d1;
    int roomNumber,totalDays;
    float perDayCharge;
    string name;
    cout<<"Enter room number: "<<endl;
    cin>>roomNumber;
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter per day charges: "<<endl;
    cin>>perDayCharge;
    cout<<"Enter total days: "<<endl;
    cin>>totalDays;
    double totalAmount = d1.checkIn(name,roomNumber,perDayCharge,totalDays);
    d1.checkOut(totalAmount);
    }