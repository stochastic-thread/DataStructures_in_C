typedef struct node {
    int value;
    struct node *next;
} Node;

typedef struct {
    Node *root;
} List;
