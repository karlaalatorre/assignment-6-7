/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Dropping lowest score
 * Created on July 22, 2015, 11:38 PM
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>//get set precision
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes
int getScore(int, int, int  &total);
float calcAverage(int, int);
int findLowest(int ScoreArray[5]);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    int scoreArray[5];//score ARRAY
    int score=0;//test score
    float avg=0.0f;//average score
    int lowest=0;//lowest score that will be dropped
    int total=0;//total average without the lowest score
    
    //ARRAY DEVELOPMENT
    for(int i=1; i<=5; i++)
    {
        score=getScore(score,i,total);
        scoreArray[i-1]=score;
    }
   
    //find lowest
    lowest=findLowest(scoreArray);
    avg=calcAverage(lowest, total);
   
    //outputting what was found
    cout<<setprecision(2)<<fixed;
    cout<<"The lowest score dropped was: "<<lowest<<endl;
    cout<<"The Average grade is: "<<avg<<endl;
    
    //exit stage right
    return 0;
}

//calcAverage void
float calcAverage(int lowest, int total)
{
    int sum=0;//sum of four tests
    float avg=0.0f;//average grade
    
    sum=total-lowest;//dropping lowest grade
    avg=(sum/4.0f);
    return avg;
}

//find lowest void/array
int findLowest(int scoreArray[5])
{
    int smllst=scoreArray[0];
    for(int i=1; i<5; i++)
    {
        if(scoreArray[i]<smllst)
            smllst=scoreArray[i];
    }
    return smllst;
}

//get score void
int getScore(int score, int i, int &total)
{
    cout<<"Enter test score for exam number "<<i<<": ";
    cin>>score;
    //testing input
    while(score<0||score>100)
    {
        cout<<"Please enter a valid score. Try again: ";
        cin>>score;
    }
    total+=score;
    return score;
}