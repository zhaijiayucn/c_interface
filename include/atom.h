#ifndef ATOM_H_
#define ATOM_H_

extern int Atom_length(const char *pstr);
extern const char *Atom_new(const char *pStr, int len);
extern const char *Atom_string(const char *pStr);
extern const char *Atom_int(long n);

#endif
