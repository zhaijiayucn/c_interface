#ifndef STACK_INCLUDE
#define STACK_INCLUDE

typedef struct Stack_T *Stack_T;

extern Stack_T Stack_new(void);
extern int Stack_empty(Stack_T, stk);
extern void Stack_push(Stack_T, void *x);
extern void *Stack_pop(Stack_T, stk);
extern void Stack_free(Stack_t *stk);

#endif
