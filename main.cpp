
#include <iostream>

using namespace std;

int main()
{
    float tempC, tempF, tempK;
    int i, choice;
    char ch;

    do
    {
    cout<<"\t \t";
    cout<<"BEM VINDO PARA CONVERTER TEMPERATURE PROGRAM DE GUIGAS";
    cout<<"\n";
    for(i=0;i<80;i++)
    {
        cout<<"*";
    }

    cout<<"\nEscolha qual tipo de Temperatura irá converter: \n";
    for(i=0;i<80;i++)
    {
        cout<<"*";
    }

    cout<<"\n\t 1:-> Temperatura de Celsius \n \t 2:-> Temperatura de Fahrenheit \n \t 3:-> Temperatura de Kevin\n";
    for(i=0;i<80;i++)
    {
        cout<<"*";
    }

    cin>>choice;

    if(choice == 1) {

        cout<<"\nEscolha um para qual tipo irá converter: \n";
        for(i=0;i<80;i++)
        {
            cout<<"*";
        }
        cout <<"\n\t1:-> Para Fahrenheit \n \t 2:-> Para Kevin\n";
        for(i=0;i<80;i++)
        {
            cout<<"*";
        }
        cin>>choice;
        if(choice == 1) {
            cout<<"Informe a Temperatura em Celsius : ";
	        cin>>tempC;
	        tempF = (9*tempC)/5 + 32;
	        cout<<"Em Fahrenheit é "<<tempF;
        } else if(choice == 2) {
            cout<<"Informe a Temperatura em Celsius : ";
	        cin>>tempC;
	        tempK = tempC + 273.15;
	        cout<<"Em Kevin é "<<tempK;
        }   else {
            cout << "\nNAO FOI ENCONTRADO NENHUMA FUNÇÃO\n";
        }

    } else if(choice == 2) {

        cout<<"\nEscolha um para qual tipo irá converter: \n";
        for(i=0;i<80;i++)
        {
            cout<<"*";
        }
        cout <<"\n\t1:-> Para Celsius \n \t 2:-> Para Kevin\n";
        for(i=0;i<80;i++)
        {
            cout<<"*";
        }
        cin>>choice;
        if(choice == 1) {
            cout<<"Informe a Temperatura em Fahrenheit : ";
	        cin>>tempF;
	        tempC = (5*(tempF-32))/9;
	        cout<<"Em Celsius é "<<tempC;
        } else if(choice == 2) {
            cout<<"Informe a Temperatura em Fahrenheit : ";
	        cin>>tempF;
	        tempC = (5*(tempF-32))/9;
	        tempK = tempC + 273.15;
	        cout<<"Em Kelvin é "<<tempK;
        }else {
            cout << "\nNAO FOI ENCONTRADO NENHUMA FUNÇÃO\n";
        }

    } else if(choice == 3) {

        cout<<"\nEscolha um para qual tipo irá converter: \n";
        for(i=0;i<80;i++)
        {
            cout<<"*";
        }
        cout <<"\n\t1:-> Para Celsius \n \t 2:-> Para Fahrenheit\n";
        for(i=0;i<80;i++)
        {
            cout<<"*";
        }
        cin>>choice;
        if(choice == 1) {
            cout<<"Informe a Temperatura em Kelvin : ";
	        cin>>tempK;
	        tempC = tempK - 273.15;
	        cout<<"Em Celsius é "<<tempC;
        } else if(choice == 2) {
            cout<<"Informe a Temperatura em Kelvin : ";
	        cin>>tempK;
	        tempC = tempK - 273.15;
	        tempF = (9*tempC)/5 + 32;
	        cout<<"Em Fahrenheit é "<<tempF;
        }else {
            cout << "\nNAO FOI ENCONTRADO NENHUMA FUNÇÃO\n";
        }

    } else {
        cout << "\nNAO FOI ENCONTRADO NENHUMA FUNÇÃO\n";
    }

    cout<<"\n\nAperte 'Y' para continuar : ";
    cin>>ch;
    system("cls");
    }while(ch == 'y' || ch == 'Y');


    return 0;
}
