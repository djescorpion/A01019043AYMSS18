#include <iostream>
using namespace std;

class Product
{
public:
    virtual void operation1() = 0;
    virtual void operation2() = 0;
};

class Producto1 : public Product
{
public:
    void Operacion1()
    {
        cout<<"operacion 1 Prod 2";
    }
    
    void Operacion2()
    {
        cout<<"operacion 1 Prod 2";
    }
    void describeMe()
    {
        cout<<"producto terminado"<<endl;
    }
};

class Producto2 : public Product
{
public:
    void Operacion1()
    {
        cout<<"operacion 2 Prod 1";
    }
    
    void Operacion2()
    {
        cout<<"operacion 2 Prod 2";
    }
};


class Creator
{
    template<class Tipo>
    Tipo* factoryMethod()
    {
        return new Tipo;
    };
public:
    template<class Tipo>
    Tipo* create()
    {
        Tipo* temporal;
        temporal = factoryMethod<Tipo>();
        temporal->operacion1();
        temporal->operacion1();
        return temporal;
    }
};

int main(int argc, const char * argv[])
{
    Creator* c = new Creator;
    Producto1* p1 = c->create<Producto1>();
    p1->describeMe();
    return 1;
}
