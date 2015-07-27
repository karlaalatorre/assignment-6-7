/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 *Rainfall calculation
 * Created on July 23, 2015, 12:16 AM
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>//set precision

using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float rain[12];//different months of rainfall
    float total=0.0f;//total rainfall
    float avg=0.0f;//average rainfall
    float maxrain=0.0f;//maximum rainfall
    float minrain=0.0f;//minimum rainfall
    float tempRain=0.0f;
    
    //rainfall array
    for(int i=0; i<12; i++)
    {
        cout<<"Enter rainfall for month "<<i+1<<": "<<endl;
        cin>>rain[i];
        total+=rain[i];
    }
    //average rainfall calculation
    avg=(total/12);
    maxrain=rain[0];
    minrain=rain[0];
    
    for(int i=1; i<=12; i++)
    {
        tempRain=rain[i];
        if(tempRain<minrain)
            minrain=tempRain;
        if(tempRain>maxrain)
            maxrain=tempRain;
    }
    //output unknowns here
    cout<<setprecision(2)<<fixed;
    cout<<"Total rainfall was: "<<total<<endl;
    cout<<"Average rainfall was: "<<avg<<endl;
    cout<<"Highest rainfall was: "<<maxrain<<endl;
    cout<<"Lowest rainfall was: "<<minrain<<endl;
    
    //Exit stage right!
    return 0;
}
