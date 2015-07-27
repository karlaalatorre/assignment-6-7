/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Purpose; stimulating coin toss
 * Created on July 27, 2015, 11:54 AM
 */

//System Libraries
#include <iostream> //I/O Library
#include <cstdlib>//rnadom number
#include <ctime>//time for random number

using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes
int coinToss(void)
{
    int randomNumber;
    randomNumber=1+ rand()%2;
    return randomNumber;
}

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    int HMT=0;//how many times
    int randomNumber=0;//random number
    string HT="";//head or tail
   
    //input values here!
    cout<<"How many times to toss the coin? ";
    cin>>HMT;
    //time to generate number
    srand((time(0)));
    
    //loop begins here
    for(int i=1; i<=HMT; i++)
    {
        randomNumber=coinToss();
        if (randomNumber==1)
            HT="HEAD";
        else
            HT="TAIL";
        cout<<HT<<endl;
    }
    //output unknowns here
    
    //Exit stage right!
    return 0;
}
