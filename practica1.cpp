#include <cstdlib>
#include <iostream>

using namespace std;

struct alumno{
   //declarando los campos
   char codigo[10], curso[10],estado[20];
   
   
   double n1,n2,n3,n4; 
   double promedio;      
};
int main(int argc, char *argv[])
{
    //declarando un arreglo de estructuras para 5 alumnos
    alumno alumnoo[5];
    char a[20]="Aprobado";
    char d[20]="Desaprobado";
   int contador=0, contador1=0;
    for(int index=0; index<5; index++){
        cout<<"Nota del alumno "<<index+1<<endl;    
       cout<<"Codigo: ";
       cin>>alumnoo[index].codigo;
       cout<<"Curso: ";
       cin>>alumnoo[index].curso;
       cout<<"Nota 1: ";
       cin>>alumnoo[index].n1;
       cout<<"Nota 2: ";
       cin>>alumnoo[index].n2;
       cout<<"Nota 3: ";
       cin>>alumnoo[index].n3;
       cout<<"Nota 4: ";
       cin>>alumnoo[index].n4;
       //calculando EL PROMEDIO
       alumnoo[index].promedio = (alumnoo[index].n1+alumnoo[index].n2+alumnoo[index].n3+alumnoo[index].n4)/4;        
       if(alumnoo[index].promedio>=14){
       strcpy(alumnoo[index].estado,a);
       contador++;
}
       else{
        strcpy(alumnoo[index].estado,d) ;
        contador1++;
        
            }

}
    cout<<"DATOS INGRESADOS.."<<endl;
    cout<<"CODIGO \tCURSO \tN1 \tN2 \tN3 \tN4 \tPROM  \tESTADO"<<endl;
    for(int index=0; index<5; index++){
       cout<<alumnoo[index].codigo<<"\t"<<
       alumnoo[index].curso<<"\t"<<alumnoo[index].n1
       <<"\t"<<alumnoo[index].n2<<"\t"<<alumnoo[index].n3
       <<"\t"<<alumnoo[index].n4<<"\t"<<alumnoo[index].promedio
       <<"\t"<<alumnoo[index].estado<<endl;      
    }
    cout <<"Total aprobados: "<<contador<<endl;
    cout<<"Total desaprobados: "<<contador1<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
