#include <errno.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "exno.h"


// Influence from:
// The Linux Programming Interface by Michael Kerrisk


const char* const ERRNO_STR_E2BIG = "E2BIG";
const char* const ERRNO_STR_EACCES = "EACCES";
const char* const ERRNO_STR_EADDRINUSE = "EADDRINUSE";
const char* const ERRNO_STR_EADDRNOTAVAIL = "EADDRNOTAVAIL";
const char* const ERRNO_STR_EADV = "EADV";
const char* const ERRNO_STR_EAFNOSUPPORT = "EAFNOSUPPORT";
const char* const ERRNO_STR_EAGAIN = "EAGAIN";
const char* const ERRNO_STR_EALREADY = "EALREADY";
const char* const ERRNO_STR_EBADE = "EBADE";
const char* const ERRNO_STR_EBADF = "EBADF";
const char* const ERRNO_STR_EBADFD = "EBADFD";
const char* const ERRNO_STR_EBADMSG = "EBADMSG";
const char* const ERRNO_STR_EBADR = "EBADR";
const char* const ERRNO_STR_EBADRQC = "EBADRQC";
const char* const ERRNO_STR_EBADSLT = "EBADSLT";
const char* const ERRNO_STR_EBFONT = "EBFONT";
const char* const ERRNO_STR_EBUSY = "EBUSY";
const char* const ERRNO_STR_ECANCELED = "ECANCELED";
const char* const ERRNO_STR_ECHILD = "ECHILD";
const char* const ERRNO_STR_ECHRNG = "ECHRNG";
const char* const ERRNO_STR_ECOMM = "ECOMM";
const char* const ERRNO_STR_ECONNABORTED = "ECONNABORTED";
const char* const ERRNO_STR_ECONNREFUSED = "ECONNREFUSED";
const char* const ERRNO_STR_ECONNRESET = "ECONNRESET";
const char* const ERRNO_STR_EDEADLK = "EDEADLK";
const char* const ERRNO_STR_EDESTADDRREQ = "EDESTADDRREQ";
const char* const ERRNO_STR_EDOM = "EDOM";
const char* const ERRNO_STR_EDOTDOT = "EDOTDOT";
const char* const ERRNO_STR_EDQUOT = "EDQUOT";
const char* const ERRNO_STR_EEXIST = "EEXIST";
const char* const ERRNO_STR_EFAULT = "EFAULT";
const char* const ERRNO_STR_EFBIG = "EFBIG";
const char* const ERRNO_STR_EHOSTDOWN = "EHOSTDOWN";
const char* const ERRNO_STR_EHOSTUNREACH = "EHOSTUNREACH";
const char* const ERRNO_STR_EIDRM = "EIDRM";
const char* const ERRNO_STR_EILSEQ = "EILSEQ";
const char* const ERRNO_STR_EINPROGRESS = "EINPROGRESS";
const char* const ERRNO_STR_EINTR = "EINTR";
const char* const ERRNO_STR_EINVAL = "EINVAL";
const char* const ERRNO_STR_EIO = "EIO";
const char* const ERRNO_STR_EISCONN = "EISCONN";
const char* const ERRNO_STR_EISDIR = "EISDIR";
const char* const ERRNO_STR_EISNAM = "EISNAM";
const char* const ERRNO_STR_EKEYEXPIRED = "EKEYEXPIRED";
const char* const ERRNO_STR_EKEYREJECTED = "EKEYREJECTED";
const char* const ERRNO_STR_EKEYREVOKED = "EKEYREVOKED";
const char* const ERRNO_STR_EL2HLT = "EL2HLT";
const char* const ERRNO_STR_EL2NSYNC = "EL2NSYNC";
const char* const ERRNO_STR_EL3HLT = "EL3HLT";
const char* const ERRNO_STR_EL3RST = "EL3RST";
const char* const ERRNO_STR_ELIBACC = "ELIBACC";
const char* const ERRNO_STR_ELIBBAD = "ELIBBAD";
const char* const ERRNO_STR_ELIBEXEC = "ELIBEXEC";
const char* const ERRNO_STR_ELIBMAX = "ELIBMAX";
const char* const ERRNO_STR_ELIBSCN = "ELIBSCN";
const char* const ERRNO_STR_ELNRNG = "ELNRNG";
const char* const ERRNO_STR_ELOOP = "ELOOP";
const char* const ERRNO_STR_EMEDIUMTYPE = "EMEDIUMTYPE";
const char* const ERRNO_STR_EMFILE = "EMFILE";
const char* const ERRNO_STR_EMLINK = "EMLINK";
const char* const ERRNO_STR_EMSGSIZE = "EMSGSIZE";
const char* const ERRNO_STR_EMULTIHOP = "EMULTIHOP";
const char* const ERRNO_STR_ENAMETOOLONG = "ENAMETOOLONG";
const char* const ERRNO_STR_ENAVAIL = "ENAVAIL";
const char* const ERRNO_STR_ENETDOWN = "ENETDOWN";
const char* const ERRNO_STR_ENETRESET = "ENETRESET";
const char* const ERRNO_STR_ENETUNREACH = "ENETUNREACH";
const char* const ERRNO_STR_ENFILE = "ENFILE";
const char* const ERRNO_STR_ENOANO = "ENOANO";
const char* const ERRNO_STR_ENOBUFS = "ENOBUFS";
const char* const ERRNO_STR_ENOCSI = "ENOCSI";
const char* const ERRNO_STR_ENODATA = "ENODATA";
const char* const ERRNO_STR_ENODEV = "ENODEV";
const char* const ERRNO_STR_ENOENT = "ENOENT";
const char* const ERRNO_STR_ENOEXEC = "ENOEXEC";
const char* const ERRNO_STR_ENOKEY = "ENOKEY";
const char* const ERRNO_STR_ENOLCK = "ENOLCK";
const char* const ERRNO_STR_ENOLINK = "ENOLINK";
const char* const ERRNO_STR_ENOMEDIUM = "ENOMEDIUM";
const char* const ERRNO_STR_ENOMEM = "ENOMEM";
const char* const ERRNO_STR_ENOMSG = "ENOMSG";
const char* const ERRNO_STR_ENONET = "ENONET";
const char* const ERRNO_STR_ENOPKG = "ENOPKG";
const char* const ERRNO_STR_ENOPROTOOPT = "ENOPROTOOPT";
const char* const ERRNO_STR_ENOSPC = "ENOSPC";
const char* const ERRNO_STR_ENOSR = "ENOSR";
const char* const ERRNO_STR_ENOSTR = "ENOSTR";
const char* const ERRNO_STR_ENOSYS = "ENOSYS";
const char* const ERRNO_STR_ENOTBLK = "ENOTBLK";
const char* const ERRNO_STR_ENOTCONN = "ENOTCONN";
const char* const ERRNO_STR_ENOTDIR = "ENOTDIR";
const char* const ERRNO_STR_ENOTEMPTY = "ENOTEMPTY";
const char* const ERRNO_STR_ENOTNAM = "ENOTNAM";
const char* const ERRNO_STR_ENOTRECOVERABLE = "ENOTRECOVERABLE";
const char* const ERRNO_STR_ENOTSOCK = "ENOTSOCK";
const char* const ERRNO_STR_ENOTTY = "ENOTTY";
const char* const ERRNO_STR_ENOTUNIQ = "ENOTUNIQ";
const char* const ERRNO_STR_ENXIO = "ENXIO";
const char* const ERRNO_STR_EOPNOTSUPP = "EOPNOTSUPP";
const char* const ERRNO_STR_EOVERFLOW = "EOVERFLOW";
const char* const ERRNO_STR_EOWNERDEAD = "EOWNERDEAD";
const char* const ERRNO_STR_EPERM = "EPERM";
const char* const ERRNO_STR_EPFNOSUPPORT = "EPFNOSUPPORT";
const char* const ERRNO_STR_EPIPE = "EPIPE";
const char* const ERRNO_STR_EPROTO = "EPROTO";
const char* const ERRNO_STR_EPROTONOSUPPORT = "EPROTONOSUPPORT";
const char* const ERRNO_STR_EPROTOTYPE = "EPROTOTYPE";
const char* const ERRNO_STR_ERANGE = "ERANGE";
const char* const ERRNO_STR_EREMCHG = "EREMCHG";
const char* const ERRNO_STR_EREMOTE = "EREMOTE";
const char* const ERRNO_STR_EREMOTEIO = "EREMOTEIO";
const char* const ERRNO_STR_ERESTART = "ERESTART";
const char* const ERRNO_STR_EROFS = "EROFS";
const char* const ERRNO_STR_ESHUTDOWN = "ESHUTDOWN";
const char* const ERRNO_STR_ESOCKTNOSUPPORT = "ESOCKTNOSUPPORT";
const char* const ERRNO_STR_ESPIPE = "ESPIPE";
const char* const ERRNO_STR_ESRCH = "ESRCH";
const char* const ERRNO_STR_ESRMNT = "ESRMNT";
const char* const ERRNO_STR_ESTALE = "ESTALE";
const char* const ERRNO_STR_ESTRPIPE = "ESTRPIPE";
const char* const ERRNO_STR_ETIME = "ETIME";
const char* const ERRNO_STR_ETIMEDOUT = "ETIMEDOUT";
const char* const ERRNO_STR_ETOOMANYREFS = "ETOOMANYREFS";
const char* const ERRNO_STR_ETXTBSY = "ETXTBSY";
const char* const ERRNO_STR_EUCLEAN = "EUCLEAN";
const char* const ERRNO_STR_EUNATCH = "EUNATCH";
const char* const ERRNO_STR_EUSERS = "EUSERS";
const char* const ERRNO_STR_EXDEV = "EXDEV";
const char* const ERRNO_STR_EXFULL = "EXFULL";
const char* const ERRNO_STR_UNKNOWN = "<?_UNKNOWN_ERRNO_?>";


const char* const errname(int err)
{
    switch(err)
    {
        case E2BIG:           return ERRNO_STR_E2BIG;
        case EACCES:          return ERRNO_STR_EACCES;
        case EADDRINUSE:      return ERRNO_STR_EADDRINUSE;
        case EADDRNOTAVAIL:   return ERRNO_STR_EADDRNOTAVAIL;
        case EADV:            return ERRNO_STR_EADV;
        case EAFNOSUPPORT:    return ERRNO_STR_EAFNOSUPPORT;
        case EAGAIN:          return ERRNO_STR_EAGAIN;
        case EALREADY:        return ERRNO_STR_EALREADY;
        case EBADE:           return ERRNO_STR_EBADE;
        case EBADF:           return ERRNO_STR_EBADF;
        case EBADFD:          return ERRNO_STR_EBADFD;
        case EBADMSG:         return ERRNO_STR_EBADMSG;
        case EBADR:           return ERRNO_STR_EBADR;
        case EBADRQC:         return ERRNO_STR_EBADRQC;
        case EBADSLT:         return ERRNO_STR_EBADSLT;
        case EBFONT:          return ERRNO_STR_EBFONT;
        case EBUSY:           return ERRNO_STR_EBUSY;
        case ECANCELED:       return ERRNO_STR_ECANCELED;
        case ECHILD:          return ERRNO_STR_ECHILD;
        case ECHRNG:          return ERRNO_STR_ECHRNG;
        case ECOMM:           return ERRNO_STR_ECOMM;
        case ECONNABORTED:    return ERRNO_STR_ECONNABORTED;
        case ECONNREFUSED:    return ERRNO_STR_ECONNREFUSED;
        case ECONNRESET:      return ERRNO_STR_ECONNRESET;
        case EDEADLK:         return ERRNO_STR_EDEADLK;
        case EDESTADDRREQ:    return ERRNO_STR_EDESTADDRREQ;
        case EDOM:            return ERRNO_STR_EDOM;
        case EDOTDOT:         return ERRNO_STR_EDOTDOT;
        case EDQUOT:          return ERRNO_STR_EDQUOT;
        case EEXIST:          return ERRNO_STR_EEXIST;
        case EFAULT:          return ERRNO_STR_EFAULT;
        case EFBIG:           return ERRNO_STR_EFBIG;
        case EHOSTDOWN:       return ERRNO_STR_EHOSTDOWN;
        case EHOSTUNREACH:    return ERRNO_STR_EHOSTUNREACH;
        case EIDRM:           return ERRNO_STR_EIDRM;
        case EILSEQ:          return ERRNO_STR_EILSEQ;
        case EINPROGRESS:     return ERRNO_STR_EINPROGRESS;
        case EINTR:           return ERRNO_STR_EINTR;
        case EINVAL:          return ERRNO_STR_EINVAL;
        case EIO:             return ERRNO_STR_EIO;
        case EISCONN:         return ERRNO_STR_EISCONN;
        case EISDIR:          return ERRNO_STR_EISDIR;
        case EISNAM:          return ERRNO_STR_EISNAM;
        case EKEYEXPIRED:     return ERRNO_STR_EKEYEXPIRED;
        case EKEYREJECTED:    return ERRNO_STR_EKEYREJECTED;
        case EKEYREVOKED:     return ERRNO_STR_EKEYREVOKED;
        case EL2HLT:          return ERRNO_STR_EL2HLT;
        case EL2NSYNC:        return ERRNO_STR_EL2NSYNC;
        case EL3HLT:          return ERRNO_STR_EL3HLT;
        case EL3RST:          return ERRNO_STR_EL3RST;
        case ELIBACC:         return ERRNO_STR_ELIBACC;
        case ELIBBAD:         return ERRNO_STR_ELIBBAD;
        case ELIBEXEC:        return ERRNO_STR_ELIBEXEC;
        case ELIBMAX:         return ERRNO_STR_ELIBMAX;
        case ELIBSCN:         return ERRNO_STR_ELIBSCN;
        case ELNRNG:          return ERRNO_STR_ELNRNG;
        case ELOOP:           return ERRNO_STR_ELOOP;
        case EMEDIUMTYPE:     return ERRNO_STR_EMEDIUMTYPE;
        case EMFILE:          return ERRNO_STR_EMFILE;
        case EMLINK:          return ERRNO_STR_EMLINK;
        case EMSGSIZE:        return ERRNO_STR_EMSGSIZE;
        case EMULTIHOP:       return ERRNO_STR_EMULTIHOP;
        case ENAMETOOLONG:    return ERRNO_STR_ENAMETOOLONG;
        case ENAVAIL:         return ERRNO_STR_ENAVAIL;
        case ENETDOWN:        return ERRNO_STR_ENETDOWN;
        case ENETRESET:       return ERRNO_STR_ENETRESET;
        case ENETUNREACH:     return ERRNO_STR_ENETUNREACH;
        case ENFILE:          return ERRNO_STR_ENFILE;
        case ENOANO:          return ERRNO_STR_ENOANO;
        case ENOBUFS:         return ERRNO_STR_ENOBUFS;
        case ENOCSI:          return ERRNO_STR_ENOCSI;
        case ENODATA:         return ERRNO_STR_ENODATA;
        case ENODEV:          return ERRNO_STR_ENODEV;
        case ENOENT:          return ERRNO_STR_ENOENT;
        case ENOEXEC:         return ERRNO_STR_ENOEXEC;
        case ENOKEY:          return ERRNO_STR_ENOKEY;
        case ENOLCK:          return ERRNO_STR_ENOLCK;
        case ENOLINK:         return ERRNO_STR_ENOLINK;
        case ENOMEDIUM:       return ERRNO_STR_ENOMEDIUM;
        case ENOMEM:          return ERRNO_STR_ENOMEM;
        case ENOMSG:          return ERRNO_STR_ENOMSG;
        case ENONET:          return ERRNO_STR_ENONET;
        case ENOPKG:          return ERRNO_STR_ENOPKG;
        case ENOPROTOOPT:     return ERRNO_STR_ENOPROTOOPT;
        case ENOSPC:          return ERRNO_STR_ENOSPC;
        case ENOSR:           return ERRNO_STR_ENOSR;
        case ENOSTR:          return ERRNO_STR_ENOSTR;
        case ENOSYS:          return ERRNO_STR_ENOSYS;
        case ENOTBLK:         return ERRNO_STR_ENOTBLK;
        case ENOTCONN:        return ERRNO_STR_ENOTCONN;
        case ENOTDIR:         return ERRNO_STR_ENOTDIR;
        case ENOTEMPTY:       return ERRNO_STR_ENOTEMPTY;
        case ENOTNAM:         return ERRNO_STR_ENOTNAM;
        case ENOTRECOVERABLE: return ERRNO_STR_ENOTRECOVERABLE;
        case ENOTSOCK:        return ERRNO_STR_ENOTSOCK;
        case ENOTTY:          return ERRNO_STR_ENOTTY;
        case ENOTUNIQ:        return ERRNO_STR_ENOTUNIQ;
        case ENXIO:           return ERRNO_STR_ENXIO;
        case EOPNOTSUPP:      return ERRNO_STR_EOPNOTSUPP;
        case EOVERFLOW:       return ERRNO_STR_EOVERFLOW;
        case EOWNERDEAD:      return ERRNO_STR_EOWNERDEAD;
        case EPERM:           return ERRNO_STR_EPERM;
        case EPFNOSUPPORT:    return ERRNO_STR_EPFNOSUPPORT;
        case EPIPE:           return ERRNO_STR_EPIPE;
        case EPROTO:          return ERRNO_STR_EPROTO;
        case EPROTONOSUPPORT: return ERRNO_STR_EPROTONOSUPPORT;
        case EPROTOTYPE:      return ERRNO_STR_EPROTOTYPE;
        case ERANGE:          return ERRNO_STR_ERANGE;
        case EREMCHG:         return ERRNO_STR_EREMCHG;
        case EREMOTE:         return ERRNO_STR_EREMOTE;
        case EREMOTEIO:       return ERRNO_STR_EREMOTEIO;
        case ERESTART:        return ERRNO_STR_ERESTART;
        case EROFS:           return ERRNO_STR_EROFS;
        case ESHUTDOWN:       return ERRNO_STR_ESHUTDOWN;
        case ESOCKTNOSUPPORT: return ERRNO_STR_ESOCKTNOSUPPORT;
        case ESPIPE:          return ERRNO_STR_ESPIPE;
        case ESRCH:           return ERRNO_STR_ESRCH;
        case ESRMNT:          return ERRNO_STR_ESRMNT;
        case ESTALE:          return ERRNO_STR_ESTALE;
        case ESTRPIPE:        return ERRNO_STR_ESTRPIPE;
        case ETIME:           return ERRNO_STR_ETIME;
        case ETIMEDOUT:       return ERRNO_STR_ETIMEDOUT;
        case ETOOMANYREFS:    return ERRNO_STR_ETOOMANYREFS;
        case ETXTBSY:         return ERRNO_STR_ETXTBSY;
        case EUCLEAN:         return ERRNO_STR_EUCLEAN;
        case EUNATCH:         return ERRNO_STR_EUNATCH;
        case EUSERS:          return ERRNO_STR_EUSERS;
        case EXDEV:           return ERRNO_STR_EXDEV;
        case EXFULL:          return ERRNO_STR_EXFULL;
        default:              return ERRNO_STR_UNKNOWN;
    }
}


inline void errnout()
{
    fprintf(stderr, "errno: %s (%d): %s\n", errname(errno), errno, strerror(errno));
}


void exitMsg(int exitStatus, void (*fnEnd)(), char* fmt, ...)
{
    // print error message
    va_list vaArg;
    va_start(vaArg, fmt);

    vfprintf(stderr, fmt, vaArg);

    va_end(vaArg);
    
    // run end routine
    if( fnEnd )
        fnEnd();

    exit(exitStatus);
}


// Avoids using va_list in order to avoid using heap memory.
// It could be the case that errno is related to the exhaustion of heap memory.
// For this reason, the exit routine in fnEnd() should not allocate heap memory.
void exno(int exitStatus, void (*fnEnd)(), char* msg)
{
    fprintf(stderr, "%s\n\t", msg);
    errnout();

    if( fnEnd )
        fnEnd();

    exit(exitStatus);
}


void exnoMsg(int exitStatus, void (*fnEnd)(), char* fmt, ...)
{
    va_list vaArg;
    va_start(vaArg, fmt);

    vfprintf(stderr, fmt, vaArg);
    fprintf(stderr, "\t");
    errnout();

    // run end routine
    if( fnEnd )
        fnEnd();

    va_end(vaArg);
    exit(exitStatus);
}
