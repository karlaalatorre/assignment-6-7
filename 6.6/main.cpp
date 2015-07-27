/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 *
 * Created on July 27, 2015, 12:05 PM
 */

#include <iostream>//I/O
#include <math.h>//for powering
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float kineticEnergy(int m, int v);

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    float ke=0;//kinetic energy
    int m=0;// mass of the object
    int v=0;// velocity of the object
    
    //Process Inputs Here
    cout<<"Enter mass in kg: ";
    cin>>m;
    cout<<"Enter velocity in meters per second: ";
    cin>>v;
    
    ke=kineticEnergy(m, v);
    cout<<" Kinetic energy of this object is "<<ke<<endl;
    //Outputs Unknown Here
    
    //Exit stage Right!
   
    return 0;
}

float kineticEnergy (int m, int v)
{
    return (0.5*m)* (pow(v,2));
}

