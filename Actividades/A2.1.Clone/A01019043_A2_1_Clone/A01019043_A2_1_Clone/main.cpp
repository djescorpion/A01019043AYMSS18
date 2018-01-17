#include <iostream>
using namespace std;

class Prueba
{
public:
    int* val;
    int val2;
    Prueba()
    {
        cout<<"Default constructor ";
    }
    /*
    Prueba(int val): val(val)//lista de inicializacion cuendo 'int val'
    {
        cout<<"Params"<<val<<endl;
    }
    
    Prueba(int val)//param constructor
    {
        cout<<"Params"<<val<<endl;
    }
    */
    Prueba(int val) : val(new int (val)), val2(val)//lista de inicializacion cuendo 'int* val'
    {
        cout<<"Params "<<val<<endl;
    }
    
    Prueba(const Prueba& temp)//copy contructor
    {
        val2 = *(temp.val);
        val = new int(*(temp.val));
    }
};

int main()
{
    Prueba p;
    Prueba* z = new Prueba(2);
    cout<<"antes "<<*(z->val)<<endl;
    Prueba w = *z;
    cout<<"copia "<<*(w.val)<<endl;
    *(w.val) = 8;
    cout<<"instancia z "<<*(z->val)<<endl;
    cout<<"copia w "<<*(w.val)<<endl;
    return 0;
}
