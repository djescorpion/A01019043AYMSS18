//
//  main.cpp
//  Operaciones
//
//  Created by David Cadena on 31/01/18.
//  Copyright © 2018 David Cadena. All rights reserved.
//

#include <iostream>
using namespace std;

typedef int(*F)(int, int);
F getOperacion(char o)
{
    if(o == 'r')
        return resta;
    else
        return suma;
}

template <class T, class function>
T doTemplateFuncion(T a, T b, Funcion f)
{
    return f(a,b);
}

template get TemplateOperacion(char s)
{
    if(s == 'r')
        return resta;
    else
        return suma;}

int suma(int a, int b)
{
    return a+b;
}

int resta(int a, int b)
{
    return a-b;
}

int operacion(int a, int b)
{
    return (a * b);
}


int main()
{
    cout<< doTemplateFuncion(0,2,suma);
    cout<<getTemplateOperaciones<int(*) (int,int)>('s')(2,2);
    cout<<resta(3,1)<<endl;
    cout<<getTemplateOperacion<int(*)(int)>('d')(3);
}
