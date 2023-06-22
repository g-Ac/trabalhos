#include <iostream>
#include "aluno.h"
struct No
{
    Aluno aluno;
    No* filhoesquerda;
    No* filhodireita;
};
class AvlTree
{
    private:
    No* raiz;
    public:
    AvlTree()
    ~AvlTree();
    void deletar(No* Noatual);
    No*obterRaiz();
    bool empty;
    bool full;
    bool Insert(Aluno item);
    void Remove(Aluno aluno);
    void Buscar(Aluno& aluno, bool& busca);
    void preOrder(No* Noatual);
    void emOrder(No* Noatual)
    void posOrder(No* Noatual);
    
}