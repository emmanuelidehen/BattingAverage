//
//  BattingAverage.h
//  BattlingAverage
//
//  Created by Emmanuel Idehen on 4/16/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//
//
//  BattingAverage.h
//  BattlingAverage
//
//  Created by Emmanuel Idehen on 4/16/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//
#include <string>
#ifndef BattingAverage_h
#define BattingAverage_h

struct BattingAverage
{
    std::string player_name;
    double average;
    
    
    BattingAverage();
    void create(BattingAverage array[], int SIZE);
    void display(BattingAverage array[], int SIZE);
    void sortData(BattingAverage array[], int SIZE);
    ~BattingAverage();
    
    
};








#endif /* BattingAverage_h */
