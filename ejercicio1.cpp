#include <iostream>
#include <string>
using namespace std;
int main(){
    int a, b, c, d, e, num;
    string color1="1.Rojo", color2="2.Amarillo", color3="3.Verde", color4="4.Negro", color5="5.Blanco";
    
    cout<<"A continuación se le presentan cinco colores, elija uno de ellos:"<<endl;
    cout<<color1<<endl<<color2<<endl<<color3<<endl<<color4<<endl<<color5<<endl;

    cout<<"Elija un color escribiendo el número del color que desea ";
    cin>>num;
    cout<<endl<<endl;

    
    if (num == 1)
    {
        cout<<"Eligió el color "<<color1<<", ha ganado $20 dolares";
    }
    else if (num == 2)
    {
        cout<<"Eligió el color "<<color2<<", ha ganado $95 dolares";
    }
    else if (num == 3)
    {
        cout<<"Eligió el color "<<color3<<", ha ganado $5 dolares";
    }
    else if (num == 4)
    {
        cout<<"Eligió el color "<<color4<<", ha ganado $110 dolares";
    }
    else if (num == 5)
    {
        cout<<"Eligió el color "<<color5<<", ha ganado $55 dolares";
    }
    
    return 0; 
        
}