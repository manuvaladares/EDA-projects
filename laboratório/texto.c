#include <stdio.h>
#include <string.h>

int namefilepointposition(char *fullname){
   int i;
   for(i=0;i<strlen(fullname);i++){
       if(fullname[i]=='.')
        break;
   } 
   if(i>=strlen(fullname))
        return -1;
    else
        return i;
}



int word2vec(char *pNomeTxtEntrada){
    FILE *arqent, *arqsaida;
    char nomarq[40], word[50];
    int pointidx = namefilepointposition(pNomeTxtEntrada);
    int pp;
//Generating Output filename    
    if(pointidx>=0){
        for(pp=0;pp<pointidx;pp++)
            nomarq[pp] = pNomeTxtEntrada[pp];
        nomarq[pp] = '\0';//End of string
    }
    else
        strcpy(nomarq,  pNomeTxtEntrada);
        
    strcat(nomarq,  "_Vocabulo");
    strcat(nomarq,  ".txt");
    printf("\nRecebi no nome do arquivo: %s", nomarq);

//Generating the output:
//Abrir arquivo de origem no módulo leitura - se der erro, retorne 0
    arqent = fopen ("arqent.txt", "r" );  
    if (arqent == NULL )
    {
    puts ( "Nao foi possivel abrir o arquivo!!!" ) ;
    exit(0) ;
    }
//Abrir arquivo de saída no módulo escrita (w) - se der erro, retorne 0

    arqsaida = fopen (nomarq, "w" );
  if (arqsaida == NULL )
  {
    puts ( "Nao foi possivel gravar o arquivo!!!" ) ;
    exit(0) ;
  }
//Gerar o conteúdo do arquivo de saída com o vocábulo encontrado no arquivo de origem. Não pode haver palavras repetidas.
    
    return 1;
}


int main()
{
    char nomearq[30];
    printf("Entre com nome do arquivo:");
    scanf("%s",nomearq);
    if (!word2vec(nomearq))
        printf("\nErro na geração do vocábulo!");
    else
        printf("\nGerei o vocábulo!");
    

    return 0;
}