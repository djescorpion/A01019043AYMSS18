#include <iostream>

using namespace std;

class Moviles
{
public:
    int x;
    int y;
    int z;
    virtual Moviles* clone() = 0;
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

class Tablet : public Moviles
{
public:
    Moviles* clone()
    {
        return new Tablet(*this);
    }
};

class Smartphone : public Moviles
{
public:
    Moviles* clone()
    {
        return new Smartphone(*this);
    }
};

class Smartwatch : public Moviles
{
public:
    Moviles* clone()
    {
        return new Smartwatch(*this);
    }
};

int main()
{
    return 0;
}
