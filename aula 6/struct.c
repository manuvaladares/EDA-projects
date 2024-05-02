#include <stdio.h>

struct Livros {
char titulo[50];
char autor[50];
char assunto[100];
int id_livro;
};
// inicializando

int main()
{

    struct Livros Livro1 = { "Título genérico", "Blog Trybe", "Um livro bem genérico", 6495407 };
    printf( "Livro 1 titulo : %s\n", Livro1.titulo);
    return 0;
}
