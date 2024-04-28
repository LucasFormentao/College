typedef struct data Data;
typedef struct contato Contato;
typedef struct no No;
typedef struct lista Agenda;
Agenda *criar_agenda();
Contato ler_info();
void print_contato(Contato *info);
void insere_contato(Agenda *agenda);
void remove_contato(Agenda *agenda, char *string);
void lista_contatos(Agenda *agenda);
No* busca_contato(Agenda *agenda, int i, char *nome);
int conta_duplicados(Agenda *agenda, char *nome);
void remove_duplicados(Agenda *agenda, char *nome);
void atualiza_contato(Agenda *agenda, char *nome);
