#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"
using namespace std;
    AvlTree::AvlTree()
{
    raiz=NULL;
}
    void AvlTree::deletar(No* Noatual);
    {

    }
    No* AvlTree::obterRaiz();
    {
        return raiz;
    }
    bool AvlTree::empty();
    {
        return (raiz==NULL);
    }
    bool AvlTree::full();
    {
        try{
            No* temp =new No;
            delete temp;
            return false;
        }catch(bad_alooc exception)
        {
            return true;
        }
    }
    bool AvlTree::Insert(Aluno item);
    {
        if(full())
        {
            cout<<"esta cheio careca"<<endl;
            cout<<"nao deu pra xuxala"<<endl;
        }
        else
        {
            No* NoNovo = new No;
            NoNovo->aluno =aluno;
            NoNovo->filhodaesquerda =NULL;
            NoNovo->filhodadireita= NULL;
            if(raiz==NULL)
            {
                raiz=NoNovo;
            }
            else
            {
                No* temp = raiz;
                while(temp!=NULL)
                {
                    if(aluno.obterRa() < temp->aluno.obterRa())
                    {
                        if(temp->filhoesquerda== NULL;)
                        {
                            temp->filhoesquerda = NoNovo;
                            return true;
                        }
                        else
                        {
                            temp= temp->filhoesquerda;
                            return true;
                        }
                    }
                    else
                    {
                        if(temp->filhodireita==NULL)
                        {
                            temp->filhodireita = NoNovo;
                            return true;

                        }
                        else
                        {
                            temp = temp->filhodireita;
                            return true;
                        }
                    }
                }
            }
        }
    }
    void AvlTree::Remove(Aluno aluno);
    {
        
    }
    void AvlTree::Buscar(Aluno& aluno, bool& busca);
    {

    }
    
    void AvlTree::preOrder(No* Noatual);
    {

    }
    void AvlTree::emOrder(No* Noatual);
    {

    }
    void posOrder(No* Noatual);
    {

    }