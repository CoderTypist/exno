#ifndef _EXNO_H_
#define _EXNO_H_


const char* const errname(int err);
void errnout();
void exitMsg(int status, void (*fnEnd)(), char* fmt, ...);
void exno(int exitStatus, void (*fnEnd)(), char* msg);
void exnoMsg(int exitStatus, void (*fnEnd)(), char* fmt, ...);


#endif // _EXNO_H_
