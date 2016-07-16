//declara��o do n� da �rvore
typedef int elem;

typedef struct bloco {
        elem info;
        struct bloco *esq, *dir;
} no;

typedef no *ABB;


//prot�tipos das fun��es
void criar(ABB*);
void finalizar(ABB*);
void imprimir(ABB);
int inserir(ABB*,elem);
int remover(ABB*,elem);
int buscar(ABB,elem);
elem busca_maior(ABB);

