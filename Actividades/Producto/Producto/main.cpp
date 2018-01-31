//
//  main.cpp
//  Producto
//
//  Created by David Cadena on 24/01/18.
//  Copyright © 2018 David Cadena. All rights reserved.
//

#include <iostream>
using namespace std;

class Product
{
public:
    virtual void operation1() = 0;
    virtual void operation2() = 0;
};

class Operacion1
{
    void Producto1()
    {
        cout<<"operacion 1 Prod 2";
    }
    
    void Producto2()
    {
        cout<<"operacion 1 Prod 2";
    }
};

class Operacion2
{
    void Producto1()
    {
        cout<<"operacion 2 Prod 1";
    }
    
    void Producto2()
    {
        cout<<"operacion 2 Prod 2";
    }
};
    

class Creator
{
public:
    virtual Product* factoryMethod(int);
    
};

class ConcreteCreator : public Creator
{
    Product* factoryMethod(int tipo)
    {
        if(tipo==1)
            return new Producto1();
        else
            return new Producto2();
    }
};

int main()
{
    Creator* cliente = new Concretecreator();
    Product* miproducto = cliente->createProduct(1);
    return 1;
}
