#include<iostream>
using namespace std;

class Time
{
    int hr,min,sec;
    public:
    Time(){};
    void operator=(int seconds)
    {
        hr=(seconds/3600);
        min=(seconds%3600)/60;
        sec=(seconds%3600)%60;
    }
 void display()
    {
        cout<<"Hour = "<<hr<<endl<<"Minute = "<<min<<endl<<"Seconds = "<<sec<<endl;
    }

};
int main()
{
    int duration;
    cout<<"Enter time in seconds :"<<endl;
    cin>>duration;
    Time tobj;
    tobj=duration;
    tobj.display();
    return 0;

}