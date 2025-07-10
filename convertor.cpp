#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void logActivity(const string& activity) {
    ofstream logFile("activity_log.txt", ios::app); 
    if (logFile.is_open()) {
        logFile << activity << endl; 
        logFile.close(); 
    } else {
        cout << "Error opening log file!" << endl;
    }
}

class converter{
protected:
float kg, grams, pounds;
float meters, feet, kilometer, inches, centimeter;
float liters, milliliter, gallons;
float kmph, mph;
double bytes, kilobytes, megabytes, gigabytes, terabytes;
int seconds, minutes, hours,totalseconds;
float celsius, fahrenheit;
};


class weight:public converter{
public:
    string w;
    void wc(){
    cout<<"\033[38;2;0;255;0mEnter weight in grams\033[0m :- ";
    cin>>grams;
    kg = grams/1000;
    pounds = grams/453.592;
    cout<<"\033[38;2;255;0;0mkg\033[0m :-\033[38;2;255;0;255m "<<kg<<endl;
    cout<<"\033[38;2;255;0;0mpound\033[0m :-\033[38;2;255;0;255m "<<pounds<<"\033[0m"<<endl;
    cout<<endl;
    logActivity("You entered :- " + to_string(grams) + "\n");
    logActivity("Answer :-\n");
    logActivity("Kg :- " + to_string(kg));
    logActivity("Pound :- " + to_string(pounds) + "\n");
    }
};


class length:public converter{
public:
    void lc(){
    cout<<"\033[38;2;0;255;0mEnter length in centimeters\033[0m :- ";
    cin>>centimeter;
    meters = centimeter/100;
    kilometer = centimeter/100000;
    feet = centimeter/30.48;
    inches = centimeter/2.54;
    cout<<"\033[38;2;255;0;0mmeter\033[0m :-\033[38;2;255;0;255m "<<meters<<endl;
    cout<<"\033[38;2;255;0;0mkilometer\033[0m :-\033[38;2;255;0;255m "<<kilometer<<endl;
    cout<<"\033[38;2;255;0;0mfeet\033[0m :-\033[38;2;255;0;255m "<<feet<<endl;
    cout<<"\033[38;2;255;0;0minches\033[0m :-\033[38;2;255;0;255m "<<inches<<"\033[0m"<<endl;
    cout<<endl;
    
    logActivity("You entered :- " + to_string(centimeter) + "\n");
    logActivity("Answer :-\n");
    logActivity("Meters :- " + to_string(meters));
    logActivity("Kilometers :- " + to_string(kilometer));
    logActivity("Feet :- " + to_string(feet));
    logActivity("Inches :- " + to_string(inches) + "\n");
    }
};


class volume:public converter{
public:
    void vc(){
    cout<<"\033[38;2;0;255;0mEnter volume in liters\033[0m :- ";
    cin>>liters;
    milliliter = liters * 1000;
    gallons = liters * 0.264172;
    cout<<"\033[38;2;255;0;0mmilliliters\033[0m :-\033[38;2;255;0;255m "<<milliliter<<endl;
    cout<<"\033[38;2;255;0;0mgallons\033[0m :-\033[38;2;255;0;255m "<<gallons<<"\033[0m"<<endl;
    cout<<endl;
    
    logActivity("You entered :- " + to_string(liters) + "\n");
    logActivity("Answer :-\n");
    logActivity("Milliliter :- " + to_string(milliliter));
    logActivity("Gallons :- " + to_string(gallons) + "\n");
    }
};


class speed:public converter{
public:
    void sc(){
    cout<<"\033[38;2;0;255;0mEnter speed in kmph\033[0m :- ";
    cin>>kmph;
    mph = kmph/1.609;
    cout<<"\033[38;2;255;0;0mmph\033[0m :-\033[38;2;255;0;255m "<<mph<<"\033[0m"<<endl;
    cout<<endl;
    
    logActivity("You entered :- " + to_string(kmph) + "\n");
    logActivity("Answer :-\n");
    logActivity("Mph :- " + to_string(mph) + "\n");
    }
};


class data:public converter{
public:
    void dc(){
    cout<<"\033[38;2;0;255;0mEnter data in bytes\033[0m :- ";
    cin>>bytes;
    kilobytes = bytes/1024;
    megabytes = kilobytes/1024;
    gigabytes = megabytes/1024;
    terabytes = gigabytes/1024;
    cout<<"\033[38;2;255;0;0mKiloByte\033[0m :-\033[38;2;255;0;255m "<<kilobytes<<endl;
    cout<<"\033[38;2;255;0;0mMegaByte\033[0m :-\033[38;2;255;0;255m "<<megabytes<<endl;
    cout<<"\033[38;2;255;0;0mGigaByte\033[0m :-\033[38;2;255;0;255m "<<gigabytes<<endl;
    cout<<"\033[38;2;255;0;0mTeraByte\033[0m :-\033[38;2;255;0;255m "<<terabytes<<"\033[0m"<<endl;
    cout<<endl;
    
    logActivity("You entered :- " + to_string(bytes) + "\n");
    logActivity("Answer :-\n");
    logActivity("Kilobytes :- " + to_string(kilobytes));
    logActivity("Megabytes :- " + to_string(megabytes));
    logActivity("Gigabytes :- " + to_string(gigabytes));
    logActivity("Terabytes :- " + to_string(terabytes) + "\n");
    }
};


class time:public converter{
public:
    void tc(){
    int ts;
    cout<<"\033[38;2;0;255;0mEnter time in seconds\033[0m :- ";
    cin>>totalseconds;
    ts = totalseconds;
    hours = totalseconds / 3600;
    totalseconds %= 3600;
    minutes = totalseconds / 60;
    seconds = totalseconds % 60;    
    cout<<"\033[38;2;255;0;0mTime\033[0m :-\033[38;2;255;0;255m "<<hours<<"\033[38;2;255;255;255m "<< ':' <<"\033[38;2;255;0;255m "<<minutes<<"\033[38;2;255;255;255m "<< ':' <<"\033[38;2;255;0;255m "<<seconds<<"\033[0m "<<endl;
    cout<<endl;
    
    logActivity("You entered :- " + to_string(ts) + "\n");
    logActivity("Answer :-\n");
    logActivity("Time :- " + to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds) + "\n");
    }
};


class temperature:public converter{
public:
    void tpc(){
    cout<<"\033[38;2;0;255;0mEnter temperature in Celsius\033[0m :- ";
    cin>>celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    cout<<"\033[38;2;255;0;0mFahrenheit\033[0m :-\033[38;2;255;0;255m "<<fahrenheit<<"\033[0m"<<endl;
    cout<<endl;
    
    logActivity("You entered :- " + to_string(celsius) + "\n");
    logActivity("Answer :-\n");
    logActivity("Fahrenheit :- " + to_string(fahrenheit) + "\n");
    }
};
