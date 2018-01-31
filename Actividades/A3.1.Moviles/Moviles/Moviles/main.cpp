#include <iostream>

using namespace std;

class Moviles
{
    int t;
public:
    Moviles (int t) : t(t){}
    virtual Moviles* clone() = 0;
};

template<class Base, class Subclass>
class CloneSRTP : public Base
{
public:
    Base* clone()
    {
        try
        {
            return new Subclass(dynamic_cast<Subclass&>(*this));
        }
        catch(int a)
        {
            
        }
    }
};

class Tablet : public CloneSRTP<Moviles, Tablet>, public Base
{
public:
    Tablet() = default;
    Tablet(int t) : Moviles(t){}
    void doTabletOperations(){}
    
    void encender()
    {
        cout<<"Encendiendo"<<endl;
    }
    
    void apagar()
    {
        cout<<"Apagando"<<endl;
    }
    
    void reiniciar()
    {
        cout<<"Reiniciando"<<endl;
        
    }
    
    void restaurar()
    {
        cout<<"Restaurando"<<endl;
    }
};

class Smartphone : public CloneSRTP<Moviles, Smartphone>
{
public:
    void encender()
    {
        cout<<"Encendiendo"<<endl;
    }
    
    void apagar()
    {
        cout<<"Apagando"<<endl;
    }
    
    void reiniciar()
    {
        cout<<"Reiniciando"<<endl;
        
    }
    
    void restaurar()
    {
        cout<<"Restaurando"<<endl;
    }
};

class Smartwatch : public CloneSRTP<Moviles, Smartwatch>
{
public:
    void encender()
    {
        cout<<"Encendiendo"<<endl;
    }
    
    void apagar()
    {
        cout<<"Apagando"<<endl;
    }
    
    void reiniciar()
    {
        cout<<"Reiniciando"<<endl;
        
    }
    
    void restaurar()
    {
        cout<<"Restaurando"<<endl;
    }
};

int main()
{
    Moviles* m = new Tablet;
    //dynamic_cast<Tablet&(m)doTabletOperations()>;//Downcast
    return 0;
}
