#include<iostream>
using namespace std;
class Bill{
    private:
        string userName;
        int totalUnits;
        float totalBill;
    public:
        void setUserName(string userName){
            this->userName = userName;
        }
        void setTotalUnits(int totalUnits){
            this->totalUnits = totalUnits;
        }
        void calculateBill(){
            if(totalUnits < 100){
                totalBill = 60*totalUnits;
            }
            else if(totalUnits>100 && totalUnits<=300){
                int temp=totalUnits-100;
                totalBill=(60*100) + (80*temp);
            }
            else if(totalUnits > 300){
                int temp=totalUnits-300;
                totalBill=(60*100) + (80*200) + (90*temp);
            }
            totalBill = totalBill/100;
            totalBill = totalBill + 50;
            if(totalBill>300){
                totalBill = totalBill + (15/100.0) * totalBill;
            }
        }
        void display(){
            cout<<"Name:: "<<userName<<endl;
            cout<<"Total amount to be paid:: "<<totalBill<<" ruppes"<<endl;
        }
};
int main(){
    Bill d1;
    string userName;
    int totalUnits;
    cout<<"Enter the name of the user: "<<endl;
    cin>>userName;
    d1.setUserName(userName);
    cout<<"Enter total number of units: "<<endl;
    cin>>totalUnits;
    d1.setTotalUnits(totalUnits);
    d1.calculateBill();
    d1.display();
}