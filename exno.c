#include <errno.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "exno.h"


// Influence from:
// The Linux Programming Interface by Michael Kerrisk


char* errname(int err)
{
    char* errName = (char*)calloc(1, MAX_ERRNO_NAME_LEN + 1);
    if( !errName )
    {   
        fprintf(stderr, "Error: errname(): (errno == %d): calloc for errName failed\n", err);
        exit(-1);
    }

    switch(err)
    {
        case E2BIG:           return strcpy(errName, "E2BIG");
        case EACCES:          return strcpy(errName, "EACCES");
        case EADDRINUSE:      return strcpy(errName, "EADDRINUSE");
        case EADDRNOTAVAIL:   return strcpy(errName, "EADDRNOTAVAIL");
        case EADV:            return strcpy(errName, "EADV");
        case EAFNOSUPPORT:    return strcpy(errName, "EAFNOSUPPORT");
        case EAGAIN:          return strcpy(errName, "EAGAIN");
        case EALREADY:        return strcpy(errName, "EALREADY");
        case EBADE:           return strcpy(errName, "EBADE");
        case EBADF:           return strcpy(errName, "EBADF");
        case EBADFD:          return strcpy(errName, "EBADFD");
        case EBADMSG:         return strcpy(errName, "EBADMSG");
        case EBADR:           return strcpy(errName, "EBADR");
        case EBADRQC:         return strcpy(errName, "EBADRQC");
        case EBADSLT:         return strcpy(errName, "EBADSLT");
        case EBFONT:          return strcpy(errName, "EBFONT");
        case EBUSY:           return strcpy(errName, "EBUSY");
        case ECANCELED:       return strcpy(errName, "ECANCELED");
        case ECHILD:          return strcpy(errName, "ECHILD");
        case ECHRNG:          return strcpy(errName, "ECHRNG");
        case ECOMM:           return strcpy(errName, "ECOMM");
        case ECONNABORTED:    return strcpy(errName, "ECONNABORTED");
        case ECONNREFUSED:    return strcpy(errName, "ECONNREFUSED");
        case ECONNRESET:      return strcpy(errName, "ECONNRESET");
        case EDEADLK:         return strcpy(errName, "EDEADLK");
        case EDESTADDRREQ:    return strcpy(errName, "EDESTADDRREQ");
        case EDOM:            return strcpy(errName, "EDOM");
        case EDOTDOT:         return strcpy(errName, "EDOTDOT");
        case EDQUOT:          return strcpy(errName, "EDQUOT");
        case EEXIST:          return strcpy(errName, "EEXIST");
        case EFAULT:          return strcpy(errName, "EFAULT");
        case EFBIG:           return strcpy(errName, "EFBIG");
        case EHOSTDOWN:       return strcpy(errName, "EHOSTDOWN");
        case EHOSTUNREACH:    return strcpy(errName, "EHOSTUNREACH");
        case EIDRM:           return strcpy(errName, "EIDRM");
        case EILSEQ:          return strcpy(errName, "EILSEQ");
        case EINPROGRESS:     return strcpy(errName, "EINPROGRESS");
        case EINTR:           return strcpy(errName, "EINTR");
        case EINVAL:          return strcpy(errName, "EINVAL");
        case EIO:             return strcpy(errName, "EIO");
        case EISCONN:         return strcpy(errName, "EISCONN");
        case EISDIR:          return strcpy(errName, "EISDIR");
        case EISNAM:          return strcpy(errName, "EISNAM");
        case EKEYEXPIRED:     return strcpy(errName, "EKEYEXPIRED");
        case EKEYREJECTED:    return strcpy(errName, "EKEYREJECTED");
        case EKEYREVOKED:     return strcpy(errName, "EKEYREVOKED");
        case EL2HLT:          return strcpy(errName, "EL2HLT");
        case EL2NSYNC:        return strcpy(errName, "EL2NSYNC");
        case EL3HLT:          return strcpy(errName, "EL3HLT");
        case EL3RST:          return strcpy(errName, "EL3RST");
        case ELIBACC:         return strcpy(errName, "ELIBACC");
        case ELIBBAD:         return strcpy(errName, "ELIBBAD");
        case ELIBEXEC:        return strcpy(errName, "ELIBEXEC");
        case ELIBMAX:         return strcpy(errName, "ELIBMAX");
        case ELIBSCN:         return strcpy(errName, "ELIBSCN");
        case ELNRNG:          return strcpy(errName, "ELNRNG");
        case ELOOP:           return strcpy(errName, "ELOOP");
        case EMEDIUMTYPE:     return strcpy(errName, "EMEDIUMTYPE");
        case EMFILE:          return strcpy(errName, "EMFILE");
        case EMLINK:          return strcpy(errName, "EMLINK");
        case EMSGSIZE:        return strcpy(errName, "EMSGSIZE");
        case EMULTIHOP:       return strcpy(errName, "EMULTIHOP");
        case ENAMETOOLONG:    return strcpy(errName, "ENAMETOOLONG");
        case ENAVAIL:         return strcpy(errName, "ENAVAIL");
        case ENETDOWN:        return strcpy(errName, "ENETDOWN");
        case ENETRESET:       return strcpy(errName, "ENETRESET");
        case ENETUNREACH:     return strcpy(errName, "ENETUNREACH");
        case ENFILE:          return strcpy(errName, "ENFILE");
        case ENOANO:          return strcpy(errName, "ENOANO");
        case ENOBUFS:         return strcpy(errName, "ENOBUFS");
        case ENOCSI:          return strcpy(errName, "ENOCSI");
        case ENODATA:         return strcpy(errName, "ENODATA");
        case ENODEV:          return strcpy(errName, "ENODEV");
        case ENOENT:          return strcpy(errName, "ENOENT");
        case ENOEXEC:         return strcpy(errName, "ENOEXEC");
        case ENOKEY:          return strcpy(errName, "ENOKEY");
        case ENOLCK:          return strcpy(errName, "ENOLCK");
        case ENOLINK:         return strcpy(errName, "ENOLINK");
        case ENOMEDIUM:       return strcpy(errName, "ENOMEDIUM");
        case ENOMEM:          return strcpy(errName, "ENOMEM");
        case ENOMSG:          return strcpy(errName, "ENOMSG");
        case ENONET:          return strcpy(errName, "ENONET");
        case ENOPKG:          return strcpy(errName, "ENOPKG");
        case ENOPROTOOPT:     return strcpy(errName, "ENOPROTOOPT");
        case ENOSPC:          return strcpy(errName, "ENOSPC");
        case ENOSR:           return strcpy(errName, "ENOSR");
        case ENOSTR:          return strcpy(errName, "ENOSTR");
        case ENOSYS:          return strcpy(errName, "ENOSYS");
        case ENOTBLK:         return strcpy(errName, "ENOTBLK");
        case ENOTCONN:        return strcpy(errName, "ENOTCONN");
        case ENOTDIR:         return strcpy(errName, "ENOTDIR");
        case ENOTEMPTY:       return strcpy(errName, "ENOTEMPTY");
        case ENOTNAM:         return strcpy(errName, "ENOTNAM");
        case ENOTRECOVERABLE: return strcpy(errName, "ENOTRECOVERABLE");
        case ENOTSOCK:        return strcpy(errName, "ENOTSOCK");
        case ENOTTY:          return strcpy(errName, "ENOTTY");
        case ENOTUNIQ:        return strcpy(errName, "ENOTUNIQ");
        case ENXIO:           return strcpy(errName, "ENXIO");
        case EOPNOTSUPP:      return strcpy(errName, "EOPNOTSUPP");
        case EOVERFLOW:       return strcpy(errName, "EOVERFLOW");
        case EOWNERDEAD:      return strcpy(errName, "EOWNERDEAD");
        case EPERM:           return strcpy(errName, "EPERM");
        case EPFNOSUPPORT:    return strcpy(errName, "EPFNOSUPPORT");
        case EPIPE:           return strcpy(errName, "EPIPE");
        case EPROTO:          return strcpy(errName, "EPROTO");
        case EPROTONOSUPPORT: return strcpy(errName, "EPROTONOSUPPORT");
        case EPROTOTYPE:      return strcpy(errName, "EPROTOTYPE");
        case ERANGE:          return strcpy(errName, "ERANGE");
        case EREMCHG:         return strcpy(errName, "EREMCHG");
        case EREMOTE:         return strcpy(errName, "EREMOTE");
        case EREMOTEIO:       return strcpy(errName, "EREMOTEIO");
        case ERESTART:        return strcpy(errName, "ERESTART");
        case EROFS:           return strcpy(errName, "EROFS");
        case ESHUTDOWN:       return strcpy(errName, "ESHUTDOWN");
        case ESOCKTNOSUPPORT: return strcpy(errName, "ESOCKTNOSUPPORT");
        case ESPIPE:          return strcpy(errName, "ESPIPE");
        case ESRCH:           return strcpy(errName, "ESRCH");
        case ESRMNT:          return strcpy(errName, "ESRMNT");
        case ESTALE:          return strcpy(errName, "ESTALE");
        case ESTRPIPE:        return strcpy(errName, "ESTRPIPE");
        case ETIME:           return strcpy(errName, "ETIME");
        case ETIMEDOUT:       return strcpy(errName, "ETIMEDOUT");
        case ETOOMANYREFS:    return strcpy(errName, "ETOOMANYREFS");
        case ETXTBSY:         return strcpy(errName, "ETXTBSY");
        case EUCLEAN:         return strcpy(errName, "EUCLEAN");
        case EUNATCH:         return strcpy(errName, "EUNATCH");
        case EUSERS:          return strcpy(errName, "EUSERS");
        case EXDEV:           return strcpy(errName, "EXDEV");
        case EXFULL:          return strcpy(errName, "EXFULL");
        default:              return strcpy(errName, "<?UNKNOWN_ERR?>");
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
    fflush(stderr);

    va_end(vaArg);
    
    // run end routine
    if( fnEnd )
        fnEnd();

    exit(exitStatus);
}


// dynamic memory allocation is avoided so that exno()
// can still be called when heap memory is exhausted
void exno(int exitStatus, void (*fnEnd)(), char* msg)
{
    fprintf(stderr, "%s\n\t", msg);
    fprintf(stderr, "errno: %d", errno);

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

    if( fnEnd )
        fnEnd();

    va_end(vaArg);
    exit(exitStatus);
}
