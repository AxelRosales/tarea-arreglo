#include<iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	
	float acumuladonetooperarios;
	float acumuladonetoprofesional;
	float acumuladonetotecnico;
	float aumento;
	int ced;
	float contadoroperario;
	float contadorprofesional;
	float contadortecnicos;
	float continuar;
	float deduccion;
	float horaprecio;
	float horas;
	float neto;
	string nombre;
	float promediooperario;
	float promedioprofesional;
	float promediotecnico;
	float salario;
	float sueldoaumentado;
	float tipo;
	float tipooperarios;
	float tipoprofesional;
	float tipotecnico;
	tipooperarios = 0;
	acumuladonetooperarios = 0;
	contadoroperario = 0;
	tipotecnico = 0;
	acumuladonetotecnico = 0;
	contadortecnicos = 0;
	tipoprofesional = 0;
	acumuladonetoprofesional = 0;
	contadorprofesional = 0;
	char opcion;
	int i = 0;
	string nombres[100];
    int salarios[100];
    int cedulas[100];
    int tipos[100];
    int hora[100];
    int precioh[100];
    int netos[100];
	
	do{
		cout << "Ingrese el numero de cedula" << endl;
		cin >> cedulas[i];
		
		cout << "Ingrese el nombre del empleado" << endl;
		cin >> nombres[i];
		
		cout << "Eliga el tipo de empleado, 1- Operario=1, 2- Tecnico=2, 3- Profesional=3" << endl;
		cin >> tipos[i];
		
		cout << "Digite la cantidad de horas laboradas" << endl;
		cin >> hora[i];
		
		cout << "Digite el precio por hora" << endl;
		cin >> precioh[i];
		
		salario = (hora[i]*precioh[i]);
		if (tipos[i]==1) {
			contadoroperario = contadoroperario+1;
			aumento = (salario*0.15);
			sueldoaumentado = (salario+aumento);
			tipooperarios = tipooperarios+1;
			deduccion = (sueldoaumentado/9.17);
			netos[i] = (sueldoaumentado-deduccion);
			acumuladonetooperarios = acumuladonetooperarios+neto;
			promediooperario = (acumuladonetooperarios/contadoroperario);
		} else {
			if (tipos[i]==2) {
				contadortecnicos = contadortecnicos+1;
				aumento = (salario*0.10);
				sueldoaumentado = (salario+aumento);
				tipotecnico = tipotecnico+1;
				deduccion = (sueldoaumentado/9.17);
				netos[i] = (sueldoaumentado-deduccion);
				acumuladonetotecnico = acumuladonetotecnico+neto;
				promediotecnico = (acumuladonetotecnico/contadortecnicos);
			} else {
				if (tipos[i]==3) {
					contadorprofesional = contadorprofesional+1;
					aumento = (salario*0.05);
					sueldoaumentado = (salario+aumento);
					tipoprofesional = tipoprofesional+1;
					deduccion = (sueldoaumentado/9.17);
					netos[i] = (sueldoaumentado-deduccion);
					acumuladonetoprofesional = acumuladonetoprofesional+neto;
					promedioprofesional = (acumuladonetoprofesional/contadoroperario);
				}
			}
		}
		cout << "Cedula:" << cedulas[i] << endl;
		cout << "Nombre del empleado:" << nombres[i] << endl;
		cout << "Tipo de empleado:" << tipos[i] << endl;
		cout << "Salario por hora:" << precioh[i] << endl;
		cout << "Cantidad de horas:" << hora[i] << endl;
		cout << "Salario ordinario:" << salario << endl;
		cout << "Aumento:" << aumento << endl;
		cout << "Salario bruto:" << sueldoaumentado << endl;
		cout << "Deduccion CCSS:" << deduccion << endl;
		cout << "Salario Neto:" << netos[i] << endl;
		cout << "Desea ingresar otro empleado: s/n"<< endl;
        cin >> opcion;
        i++;
	} while (opcion == 'S' || opcion == 's');
	cout << "Cedula***Nombre***Tipo de empleado***Cantidad de horas laburadas***Precio por hora***salario neto***" << endl;
    cout <<  "------------------" << endl;
    for (int indice =0 ;(indice<i);indice++)
    {
        cout << "  Cedula: " << cedulas[indice];
	    cout << "  Nombre: " <<nombres[indice];
	    cout << "  Tipo de empleado: " <<tipos[indice];
	    cout << "  Cantidad de horas laburadas: " <<hora[indice];
	    cout << "  Precio por hora: " <<precioh[indice];
	    cout << "  Salario neto: " << netos[indice] << endl;
    }    
    cout <<  "------------------" << endl; 
        

bool encontrado = false;  
cout << "Digite un nombre buscar:";
cin >> nombre;
for (int indice =0 ;(indice<i);indice++)  
{                                         
	 if (nombre == nombres[indice])
	   { 
	    cout << "La cedula es:" << cedulas[indice] << endl;
	    cout << "El Salario neto es: " << netos[indice] << endl;
	    cout << "Tipo de empleado:" << tipos[indice] << endl;
	    cout << "Cantidad de horas laburadas:" << hora[indice] << endl;
	    cout << "Precio por hora:" << precioh[indice] << endl;
	    encontrado = true;
	 } 
}

if (encontrado==false){
	cout << "El usuario no existe";
}



cout << "Digite un nombre para editar al empleado seleccionado:";
cin >> nombre;
for (int indice =0 ;(indice<i);indice++)  
{                                         
	 if (nombre==nombres[indice])
	   { 
	   cout << "Ingrese la nuevo cedula del empleado:"<< endl;
	   cin >> cedulas[i];
	   
	    cout << "Ingrese el nuevo nombre:"<< endl;
        cin >> nombres[i];
   
        cout << "Ingrese el nuevo salario neto:"<< endl;
        cin >> netos[i];
        
        cout << "Ingrese el nuevo tipo de empleado:"<< endl;
        cin >> tipos[i];
        
        cout << "Ingrese la nueva cantidad de horas laburadas:"<< endl;
        cin >> hora[i];
        
        cout << "Ingrese el nuevo precio por hora:"<< endl;
        cin >> precioh[i];
        
	    encontrado = true;
	   
	 } 
}

if (encontrado==false){
	cout << "El usuario no existe";
}


cout << "Digite un nombre para borrar al empleado seleccionado:" << endl;
cin >> nombre;
for (int indice =0 ;(indice<i);indice++) 
{                                         
	 if (nombre==nombres[indice])
	   { 
	   
        nombres[i]="";
   
        netos[i]=0;
        
        cedulas[i]=0;
        
        tipos[i]=0;
        
        hora[i]=0;
        
        precioh[i]=0;
        
	    encontrado = true;
	    cout << "El empleado a sido borrado" << endl;
	 } 
}

if (encontrado==false){
	cout << "El usuario no existe";
}
        
        
    // estas estadisticas las oculte para que no interfieran con los arreglos pero se pueden quitar las barras inclinadas para mostrarlas****
	/*
	cout << "1- Cantidad de empleados de tipo operarios:" << tipooperarios << endl;
	cout << "2- El acumulado de los salarios netos para operarios:" << acumuladonetooperarios << endl;
	cout << "3- El promedio de salarios netos para operarios:" << promediooperario << endl;
	cout << "4- Cantidad de empleados de tipo tecnicos:" << tipotecnico << endl;
	cout << "5- El acumulado de los salarios netos para tecnicos:" << acumuladonetotecnico << endl;
	cout << "6- El promedio de salarios netos para tecnicos:" << promediotecnico << endl;
	cout << "7- Cantidad de empleados de tipo profesionales:" << tipoprofesional << endl;
	cout << "8- El acumulado de los salarios netos para profesionales:" << acumuladonetoprofesional << endl;
	cout << "9- El promedio de salarios netos para profesionales:" << promedioprofesional << endl;*/
	return 0;
}

