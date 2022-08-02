#ifndef _EXNO_H_
#define _EXNO_H_


#define MAX_ERRNO_NAME_LEN 19


char* errname(int err);
void errnout();
void exitMsg(int exitStatus, void (*fnEnd)(), char* fmt, ...);
void exno(int exitStatus, void (*fnEnd)(), char* msg);
void exnoMsg(int exitStatus, void (*fnEnd)(), char* fmt, ...);


#endif // _EXNO_H_
