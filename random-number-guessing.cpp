#include<bits/stdc++.h>
#include <time.h>
#include <random>
using namespace std;

int main(){
    cout<<"**GUESSING NUMBER GAME**\n";
    string Player_Name;
    cout<<"Enter player's first name       :";
    cin>>Player_Name;                                                           //input players name
    int tryy;
    
    do{
    int guess,flag=0,random;
    
     srand(time(0));                //generating random number
        random=(rand()%100)+1;
    
     do{
        flag++;                     //for counting score out of 100
        cout<<"Guess any number between 1 to 100         :"; 
        cin>>guess;
        
        
     if(random==guess){                                     //Analysing
        cout<<"**Congratulations!!! , You Won** "<<endl;
        cout<<"        Score = "<<100-flag<<endl;
    }
    else if((guess)<random){
        if((guess+10)<random){
             cout<<">>>Too Low than number\n";
        }
        
  else{
        cout<<">>>Low than number\n";}}
    else if(guess > random){
        if((guess-10) > random){
            cout<<">>>Too High than number\n";
        }
        else{
            cout<<">>>High than number\n";}
            }
        
     }
    while(guess!=random);
    cout<<">>Do you want to play again (1/2)        :\n   1=Yes , 2=No                             ";
    cin>>tryy;
    }
    while(tryy!=2);
    if(tryy==2){
         cout<<"XXX**GAME END**XXX\n";}
}