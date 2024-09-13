#include<iostream>
using namespace std;

class time{
    private:
        int hour;
        int minute;
        int second;
    public:
        time(){
            hour = 0;
            minute = 0;
            second = 0;
        }
        time(int hour, int minute, int second){
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
        time add(time d1 , time d2){
            time d3;
            d3.hour = d1.hour + d2.hour;
            d3.minute = d1.minute + d2.minute;
            d3.second = d1.second + d2.second;
            while(d3.second>=60){
                d3.second = d3.second - 60;
                d3.minute = d3.minute + 1;
            }
            while(d3.minute>=60){
                d3.minute = d3.minute - 60;
                d3.hour = d3.hour + 1;
            }
            return d3;
        }
        void display(time d3){
            cout << d3.hour<<" : "<< d3.minute<<" : "<< d3.second<<endl;
        }
};
int main(){
    time d1(13,43,62),d2(4,30,22);
    time d3= d1.add(d1 ,d2);

    d1.display(d3);
}
