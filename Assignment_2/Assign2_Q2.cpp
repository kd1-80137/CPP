#include<iostream>
using namespace std;
class Address
{
private:
    string Building;
    string Street;
    string City;
    int Pin;

public:
    Address()
    {

    }
    Address(string Building,string Street,string City,int pin)
    {
        this->Building=Building;
        this->Street=Street;
        this->City=City;
        this->Pin=Pin;
    } 
    void acceptAddress()
    {
        cout<<"Your Building Name= ";
        cin>>this->Building;
         cout<<"Your street= ";
        cin>>this->Street;
         cout<<"Your City NAme= ";
        cin>>this->City;
         cout<<"Pin= ";
        cin>>this->Pin;

    }
    
    void displayAddress()
    {
        cout<<"Building= "<<this->Building<< "\n Street= "<<this->Street <<"\n city= "<<this->City<<"\n Pin= "<<this->Pin<<endl;
    }
    string get_Building()
    {
        return Building;
    }
    
    string get_Streer()
    {
        return Street;
    }
    int  get_pin()
    {
        return Pin;
    }   
 
};
int main()
{
    Address a1;
    int choice;

    while (choice)
    {
        cout<<"Enter Chioce\n 0- EXIT \n1= Your Personal Details\n 2= Check Your Details";
        cin>>choice;

        switch (choice)
        {
        case 1:
            a1.acceptAddress();
            break;
        
        case 2:
            a1.displayAddress();
        
        default:
            break;
        }
    }
    
}
