/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 *Purpose: look for largest and smallest
 * Created on July 23, 2015, 12:05 AM
 */

//System Libraries
#include <iostream> //I/O Library

using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    int numbrs[10];//only 10 numbers will be evaluated
    int smllst=0;//smallest number
    int lrgst=0;//largest number
    int temp=0;
    
    //input values here!
    for(int i=0; i<10; i++)
    {
        cout<<"Please enter number "<<i+1<<": "<<endl;
        cin>>numbrs[i];
    }
    smllst=numbrs[0];
    lrgst=numbrs[0];
    
    //looking for smallest and largest
    for (int i=1; i<=10; i++)
    {
        temp=numbrs[i];
        if(temp<smllst)
            smllst=temp;
        if(temp>lrgst)
            lrgst=temp;
    }
    //output unknowns here!
    cout<<"Largest number is: "<<lrgst<<endl;
    cout<<"Smallest number is: "<<smllst<<endl;
    
    //Exit stage right!
    return 0;
}
