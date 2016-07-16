//declaração do nó da árvore
typedef int elem;

typedef struct bloco {
        elem info;
        struct bloco *esq, *dir;
} no;

typedef no *ABB;


//protótipos das funções
void criar(ABB*);
void finalizar(ABB*);
void imprimir(ABB);
int inserir(ABB*,elem);
int remover(ABB*,elem);
int buscar(ABB,elem);
elem busca_maior(ABB);

