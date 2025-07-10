#include <iostream>
#include <fstream>
#include <string>
#include "convertor.cpp"
#include "matrix calculator.cpp"


using namespace std;



void displayHistory() {
    ifstream logFile("activity_log.txt");
    if (logFile.peek() == ifstream::traits_type::eof()) {
        cout << "No activity history found! Please perform some activity first."<<endl<<endl;
    } else {
        logFile.close(); 
        logFile.open("activity_log.txt"); 
        string line;
        cout << "Activity History :- " << endl<<endl;
        while (getline(logFile, line)) {
            cout << line << endl; 
        }
        logFile.close(); 
        cout<<endl;    
    }
}

void convertor(){

weight ob1;
length ob2;
volume ob3;
speed ob4;
data ob5;
time ob6;
temperature ob7;

    int choice;

    do {
        
        cout<<"\033[38;2;255;255;255m\033[5m*** Unit Conversion Menu ***\033[0m"<<endl<<endl;
        cout<<"\033[38;2;217;217;217m1.\033[0m \033[38;2;0;255;255mWeight\033[0m"<<endl;
        cout<<"\033[38;2;217;217;217m2.\033[0m \033[38;2;0;255;255mLength\033[0m"<<endl;
        cout<<"\033[38;2;217;217;217m3.\033[0m \033[38;2;0;255;255mVolume\033[0m"<<endl;
        cout<<"\033[38;2;217;217;217m4.\033[0m \033[38;2;0;255;255mSpeed\033[0m"<<endl;
        cout<<"\033[38;2;217;217;217m5.\033[0m \033[38;2;0;255;255mData\033[0m"<<endl;
        cout<<"\033[38;2;217;217;217m6.\033[0m \033[38;2;0;255;255mTime\033[0m"<<endl;
        cout<<"\033[38;2;217;217;217m7.\033[0m \033[38;2;0;255;255mTemperature\033[0m"<<endl;
        cout<<"\033[38;2;217;217;217m0.\033[0m \033[38;2;0;255;255mExit\033[0m"<<endl<<endl;
        cout<<"\033[7mEnter your choice:- ";
        cin>>choice;
        cout<<"\033[0m";
        cout<<endl;



        
        switch (choice) {
            case 1:
                logActivity("Converted Weight :-\n");
                ob1.wc();
                break;
            case 2:
                logActivity("Converted Length :-\n");
                ob2.lc();
                break;
            case 3:
                logActivity("Converted Volume :-\n");
                ob3.vc();
                break;
            case 4:
                logActivity("Converted Speed :-\n");
                ob4.sc();
                break;
            case 5:                
                logActivity("Converted Data :-\n");
                ob5.dc();
                break;
            case 6:
                logActivity("Converted Time :-\n");
                ob6.tc();
                break;
            case 7:               
                logActivity("Converted Temperature :-\n");
                ob7.tpc();
                break;
            case 0:
                cout<<"\033[38;2;255;255;255mExiting program. Goodbye!\033[0m"<<endl<<endl;
                break;
            default:
                cout<<"\033[38;2;255;0;0mInvalid choice !! Please try again."<<endl<<endl;
                cout<<endl;
        }
    } while (choice != 0);
}

void matrixcalculator(){
int choice;    
matrix ob1;
do{
cout<<"\033[38;2;255;255;255m\033[5m  Matrix Calculator \033[0m"<<endl;
cout<<"\033[38;2;255;255;255m\033[4m                     \033[0m"<<endl<<endl;
cout<<"\033[38;2;217;217;217m1)\033[38;2;0;0;255m Addition"<<endl;
cout<<"\033[38;2;217;217;217m2)\033[38;2;0;0;255m Subtraction"<<endl;
cout<<"\033[38;2;217;217;217m3)\033[38;2;0;0;255m Multiplication"<<endl;
cout<<"\033[38;2;217;217;217m4)\033[38;2;0;0;255m Transpose"<<endl;
cout<<"\033[38;2;217;217;217m5)\033[38;2;0;0;255m Exit\033[0m"<<endl<<endl;
cout<<"\033[38;2;0;255;0mWhich operation you would like to do with matrix ?"<<endl;
cout<<"\033[38;2;0;255;0mEnter the number accordingly :- \033[0m";
cin>>choice;
cout<<endl;

switch(choice){
case 1:
    logActivity("Addition of Matrix");
    ob1.add();
    break;
case 2:
    logActivity("Subtraction of Matrix");
    ob1.subtraction();
    break;
case 3:
    logActivity("Multiplied the Matrix");
    ob1.multiplication();
    break;
case 4:
    logActivity("Transposed a Matrix"); 
    ob1.transpose();
    break;
case 5:
    return;
default:
    cout<<"\033[38;2;255;0;0mEnter a valid choice !!"<<endl<<endl;
}
}while(1);
}


int main() {
    
    ofstream clearFile("activity_log.txt", ios::trunc);
    clearFile.close();

    int choice;
    do {
        cout<<"\033[3m\033[38;2;217;217;217m1. \033[38;2;255;100;0mConverter"<<endl;
        cout<<"\033[38;2;217;217;217m2. \033[38;2;255;100;0mMatrix Calculator"<<endl;
        cout<<"\033[38;2;217;217;217m3. \033[38;2;255;100;0mDisplay History"<<endl;
        cout<<"\033[38;2;217;217;217m4. \033[38;2;255;100;0mExit\033[0m"<<endl<<endl;
        cout<<"\033[7mEnter your choice:- ";
        cin>>choice;
        cout<<"\033[0m";
        cout<<endl;
        switch (choice) {
            case 1:
                logActivity("Performed Conversion :- ");
                convertor();
                break;
            case 2:
                logActivity("Performed Matrix Calculation :- ");
                cout<<endl;
                matrixcalculator();
                break;
            case 3:
                displayHistory();
                break;
            case 4:
                cout << "\033[38;2;255;255;255mExiting program. Goodbye!\033[0m"<<endl;
                return 0;
            default:
                cout << "\033[38;2;255;0;0mInvalid choice !! Please try again."<<endl<<endl;
        }
    } while (1);


    ofstream recreateFile("activity_log.txt", ios::trunc);
    recreateFile.close();

    return 0;
}
