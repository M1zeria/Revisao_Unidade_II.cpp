/*
Antes de tomar o expresso de Hogwarts, os Bruxos precisam comprar seu material escolar. Escreva uma Classe Livro que tenha
como atributos título e nome do autor. Forneça um método display. Forneça mais métodos caso julgue necessário.

O que é abstração?
>> Se trata da ocultação de detalhes que não são necessários, deixando a mostra somente o essencial, isso se faz com o
objetivo de simplificar o sistema.
*/
#include <iostream>
#include <string>

using namespace std;

class Livro{
    private:
    string titulo;
    string autor;
    public:

    void setTitulo(string titulo){
        this-> titulo = titulo;
    }

    void setAutor(string autor){
        this-> autor = autor;
    }
    
    string getTitulo(){
        return titulo;
    }
        
    string getAutor(){
        return autor;
    }

    void display(){
        cout << "---------------------\n";
        cout << "Titulo: " << titulo << "\n";
        cout << "Autor: " << autor << "\n";
        cout << "---------------------\n";
    }
};

int main() {
    
    string titulo, autor;

    cout << "Titulo: ";
    getline(cin, titulo);
    cout << "Autor: ";
    getline(cin, autor);

    Livro livro1;
    livro1.setTitulo(titulo);
    livro1.setAutor(autor);
    livro1.display();
    
    
    return 0;
};
