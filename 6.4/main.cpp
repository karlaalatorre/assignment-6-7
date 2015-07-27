/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 *Present value
 * Created on July 23, 2015, 12:26 AM
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>
#include <math.h>

using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes
float presentValue(float,float,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float F=0;//future value
    float r=0;//interest rate
    int n=0;//number of years
    float P=0;// present value
    
    //input values here!
    cout<<"Enter amount of money you want to save: $";
    cin>>F;
    cout<<"Please enter the interest rate: ";
    cin>>r;
    cout<<"Enter number of years you want to be saving: ";
    cin>>n;
    
    //output unknowns here
    P=presentValue(F,r,n);
    cout<<"In order to save $"<<F<<" you need to deposit $"<<P<<endl;
    
    //Exit stage right!
    return 0;
}
float presentValue(float F, float r, int n)
{
    float P;
    P=F/ (pow(1+(r*0.01),n));
    
    return P;
}
