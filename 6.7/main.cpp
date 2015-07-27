/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 *
 * Created on July 27, 2015, 12:08 PM
 */

//System Libraries
#include <iostream>// File I/O
using namespace std;// std namespace ->iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    float lvl=0.0f;//level of sea
    int years=25;//total of years that we want to calculate
    
    //Process Inputs Here
    for(int i=1; i<=years; i++)
    {
        lvl+=1.5;//ocean rises 1.5 per year
        cout<<"year "<<i<<" : "<<lvl<<"mm\n";
        
    }
    
    //Outputs Unknown Here
    
    //Exit stage Right!
    

    return 0;
}


