#include <iostream>
#include <string>
using namespace std;
int main()
{
    float e, f, x1, x2, x3, x4;
    string sv="1.El Salvador", gua="2.Guatemala", hon="3.Honduras", esp="4.España";
    string IVAsv="13%", IVAgua="9%", IVAhon="15%", IVAesp="20%";

    cout<<"Se muestra la siguiente lista de paises con su respectivo porcentaje de IVA"<<endl;
    cout<<"Pais                  IVA"<<endl;
    cout<<sv<<"         "<<IVAsv<<endl;
    cout<<gua<<"           "<<IVAgua<<endl;
    cout<<hon<<"            "<<IVAhon<<endl;
    cout<<esp<<"             "<<IVAesp<<endl<<endl;

    cout<<"Por favor ingrese el número del pais y la cantidad de dinero deseada"<<endl;
    cout<<"Pais ";
    cin>>e;
    cout<<endl;

    cout<<"Cantidad de dinero ";
    cin>>f;
    cout<<endl;
    
    x1 = (0.13 * f);
    x2 = (0.09 * f);
    x3 = (0.15 * f);
    x4 = ( 0.20 * f);
    
    if (e == 1)
    {
        cout<<"En"<<sv<<" debe cancelar "<<x1<<" dolares";
    }
    else if (e == 2){
        cout<<"En"<<gua<<" debe canelar "<<x2<<" dolares";
    }
    else if (e == 3)
    {
        cout<<"En"<<hon<<" Debe cancelar "<<x3<<" dolares";
    }
    else if (e == 4)
    {
        cout<<"En"<<esp<<" Debe cancelar "<<x4<<" dolares";
    }
    return 0;
}