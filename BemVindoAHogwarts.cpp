/*
Escreva uma Classe Bruxo que possui os atributos nome  casa. Forneça métodos set e get. 
O método setCasa deverá validar a casa. Forneça um método display que mostre na tela os atributos 
de uma forma visualmente agradável.

O que é encapsulamento?
>> Encapsulamento consiste em tornar certos dados de uma classe privados visando a proteção dos mesmos,
para que não sejam acessados por qualquer pessoa por exemplo.
*/

#include <iostream>
#include <string>

using namespace std;

class Bruxo{
    private:
    
    string nome;
    string casa;
    
    public:
    
    void setNome(string nome){
        this-> nome = nome;
    };

    void setCasa(string casa){
        this-> casa = casa;
    };

    string getNome(){
        return nome;
    };

    string getCasa(){
        return casa;
    };

    void matricula(){
      cout << "-----------------------\n";
      cout << "| Nome: " << nome << "\n";
      cout << "| Casa: " << casa << "\n"; 
      cout << "-----------------------\n";
    };
};



int main () {
    string nome, casa;

    cout << "Nome: ";
    getline(cin, nome);
    cout << "Casa: ";
    getline(cin, casa);
    
    

    Bruxo bruxo1;
    bruxo1.setNome(nome);
    bruxo1.setCasa(casa);
    bruxo1.matricula();
    return 0;
}
