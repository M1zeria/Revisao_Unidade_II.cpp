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
