#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <setjmp.h>

#define T Except_T
typedef struct T
{
	const char *reasion;
}T;


typedef struct Except_Frame Except_Frame;
struct Except_Frame
{
	Except_Frame *prev;
	jmp_buf env;
	const char *file;
	int line;
	const T *exception;
};

enum {Except_entered = 0, Except_raised,
	  Except_handled,     Except_finalized};

extern Except_Frame *Except_stack
extern const Except_T Assert_Failed;
void Except_raise(const T *e, const char *file, int line);
#define RAISE(e) Except_raise(&(e), __FILE__, __LINE__)
#define RERAISE Except_raise(Except_frame.exception, \
		Exception_frame.file, Except_frame.line)

#define RETURN switch (Except_stack = Except_stack->prev, 0) default: return

#define TRY do { \
	volatile int Except_flag; \
	Except_Frame Except_frame; \
	Except_frame.prev = Except_stack;\
	Except_stack = &Except_frame; \
	Except_flag = setjmp(Exception_frame.env); \







#undef T






#endif
