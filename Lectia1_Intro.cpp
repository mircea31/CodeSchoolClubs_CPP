#include <iostream>
using namespace std;
//var globala
int global;

int main()
{
    //variabile locale
    int a=20;
    int A=50;
    //    <-
    
    //folosire variabila globala
    global =7;
    cout<<global<<endl;
    
    unsigned int cc=20; //numar natural
    // cout<<endl<<cc<<endl;
    // CTRL+/ -> comentarii
    
    int cd=3.45;
    cout<<cd<<endl; 
    double dd=4;
    cout<<dd;
    cout<<"mesaj\n";
    cout<<"linie noua";

    double b;
    float d; //accepta mai putine zecimale
    
    string str="Hello abcdef";   

    bool e=1;
    //1 adevarat (orice diferit de 0)
    //0 fals
    bool bec=true;
    cout<<"boolean: "<<bec<<endl;
    
    // cout<<... ->afisare la consola
    cout<<"Hello World";
    cout<<"linia urmatoare"<<endl;
    cout<<"Hello World"<<a<<", "<<A<<endl;

    
    //cin>>... ->citire
    cout<<"introdu valoarea pt variabila a: ";
    cin>>a;
    cout<<"a este egal cu "<<a<<endl;

    int s,x,y;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    // constante: numere, string-uri, caractere
    // in partea stanga nu putem sa avem constanta
    s=x+y;
    // pas1: x+y
    // pas2: s=(x+y)
    cout<<"suma este "<<s<<endl;
    
    //Codul ASCII
    
    //conversie (tip_conversie)nume_variabila
    //conversie din char in int
    char c='A'; //caracter 
    cout<<"variabile c="<<c<<endl;
    cout<<(int)c<<endl; 
    cout<<(int)'A'+32<<endl; //afiseaza 'a'
    
    //conversie din int in char
    int nr=65;
    cout<<(char)nr;//'A';


    return 0;
}
