//
//  main.cpp
//  A01019043_A1_1_clock
//
//  Created by David Cadena on 10/01/18.
//  Copyright © 2018 David Cadena. All rights reserved.
//

#include <iostream>
using namespace std;

class Clock
{
private:
    static Clock* instance;
    Clock()
    {
        cout<<"constructor"<<endl;
    }
public:
    void getTime()
    {
        cout<<"son las"<<endl;
    }
    
    static Clock* getInstance()
    {
        if(instance == 0)
        {
            instance = new Clock;
        }
        return new Clock;
    }
    
    void deleteInstance()
    {
        
    }
};

Clock* Clock::instance=0;

int main()
{
    Clock * instance1 = Clock::getInstance();
    instance1->getTime();
    Clock * instance2 = Clock::getInstance();
    instance2->getTime();
    cout<<instance1<<instance2<<endl;
    
    delete instance1;
    return 0;
}
