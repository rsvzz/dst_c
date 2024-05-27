
typedef struct nodo
{
    int key;
    struct nodo* next;
} Nodo;
typedef struct stack
{
    Nodo* Cima;
} Stack;
typedef struct queue
{
    /// @brief Queue start
    Nodo* front;
    /// @brief end Nodo
    Nodo* end_q;
} Queue;