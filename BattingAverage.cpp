

//
//  BattingAverage.cpp
//  BattlingAverage
//
//  Created by Emmanuel Idehen on 4/16/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "BattingAverage.h"
#include <cmath>
using namespace std;


BattingAverage::BattingAverage()
{
   
    
    
    
}



void BattingAverage::create(BattingAverage array[], int SIZE)
{
  
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the player names: "<<i+1<<endl;
        getline(cin, array[i].player_name);
        cout << "Enter the player batting average"<<endl;
        cin>> array[i].average;
        
    }
    
    
    
    
}

void BattingAverage::display(BattingAverage array[], int SIZE){

    cout << " batting Averages ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i].player_name <<  array[i].average << endl;
    }
    cout << endl;
    
    
    
}
void BattingAverage::sortData(BattingAverage array[], int SIZE)
{
  for(int i=0;i<SIZE;i++){
        for(int j=i+1;j<SIZE;j++){
            if(array[i].average<array[j].average){
                BattingAverage temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}


BattingAverage::~BattingAverage()
{
    
    
}
