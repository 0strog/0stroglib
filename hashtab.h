#include <stdint.h>

typedef union {
    int64_t integer;
    double rational;
    unsigned char* string;
} ListVariable_t;

enum ListVariableType {
    INTEGER_ELEM,
    RATIONAL_ELEM,
    STRING_ELEM
};

typedef struct ListNode {
    ListVariable_t value;
    ListVariable_t key;
    struct ListNode* prev;
} ListNode;

typedef struct List {
    ListNode* tail;
    size_t size;
} List;

typedef struct Hashtab {
    List list;
    int64_t hash;
} Hashtab;

extern List* new_list(List* list, ListNode* node);
extern void free_list(List* list);

extern void push_front_list(List* list, ListNode* node);
extern ListVariable_t delete_from_list(List* list, ListVariable_t key);
extern void print_list(List* list);
