#include <cstdlib>
#include <iostream>

using namespace std;

struct cliente{
   //declarando los campos
   char nombre[10], curso[10],estado[20];
  int ancho, largo, precio, tmlote;
  double preciolote,dcto,pfin;
        
};
int main(int argc, char *argv[])
{
    //declarando un arreglo de estructuras para 5 alumnos
    cliente clientes[3];
    
    cout<<"##INMOBILIARIA CENTENARIO##"<<endl;   
    for(int index=0; index<3; index++){
            
        cout<<"Cliente numero "<<index+1<<endl;    
       cout<<"Ingrese nombre ";
       cin>>clientes[index].nombre;
       cout<<"Ingrese ancho del terreno ";
       cin>>clientes[index].ancho;
       cout<<"Ingrese largo del terreno: ";
       cin>>clientes[index].largo;
       cout<<"Ingrese precio por m2: ";
       cin>>clientes[index].precio;
      
       //calculando total metro cuadrado
       clientes[index].tmlote=clientes[index].ancho*clientes[index].largo;
       clientes[index].preciolote=clientes[index].tmlote*clientes[index].precio;
       clientes[index].dcto=(15*clientes[index].preciolote)/100;
       clientes[index].pfin=clientes[index].preciolote-clientes[index].dcto;
       
}
    cout<<"NOMBRE \tANCHO \tLARGO \tCOSTOM2 \tTOTALM2 \tPRECIOLTE \tDCTO  \tPRECIOFIN"<<endl;
    for(int index=0; index<3; index++){
       cout<<clientes[index].nombre<<"\t"<<
       clientes[index].ancho<<"\t"<<clientes[index].largo
       <<"\t"<<clientes[index].precio<<"\t"<<clientes[index].tmlote
       <<"\t"<<clientes[index].preciolote<<"\t"<<clientes[index].dcto
       <<"\t"<<clientes[index].pfin<<endl;      
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
