//
//  main.cpp
//  A01019043_A1_1_clock
//
//  Created by David Cadena on 10/01/18.
//  Copyright © 2018 David Cadena. All rights reserved.
//

#include <iostream>
#include <ctime>
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
        time_t   t,i;
        char *p;
        i = time (&t);
        p = ctime (&i);
        cout<<"son las "<<p<<endl;
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
        delete instance;
    }
};

Clock* Clock::instance=0;

int main()
{
    Clock * instance1 = Clock::getInstance();
    instance1->getTime();
    Clock * instance2 = Clock::getInstance();
    instance2->getTime();
    cout<<instance1<<endl;
    cout<<instance2<<endl;
    instance1->deleteInstance();
    instance2->deleteInstance();
    
    return 0;
}
