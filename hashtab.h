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
