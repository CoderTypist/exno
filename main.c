#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>


void exitMsg(int status, void (*fnEnd)(), char* pFmt, ...);
void optAppend();
void optHelp();
void optRead();
void optWrite();
void usage();


int main(int argc, char** argv)
{
    int opt;
    
    opt = getopt(argc, argv, ":a:");
    if( 'a' == opt )
        { optAppend(); return 0; }
    else if( ':' == opt )
        exitMsg(-1, &usage, "Error: Missing argument (-%c)\n", optopt);
    else
        optind = 1;

    opt = getopt(argc, argv, ":h");
    if( 'h' == opt )
        { optHelp(); return 0; }
    else
        optind = 1;

    opt = getopt(argc, argv, ":r:");
    if( 'r' == opt )
        { optRead(); return 0; }
    else if( ':' == opt )
        exitMsg(-1, &usage, "Error: Missing argument (-%c)\n", optopt);
    else
        optind = 1;

    opt = getopt(argc, argv, ":w:");
    if( 'w' == opt )
        { optWrite(); return 0; }
    else if( ':' == opt )
        exitMsg(-1, &usage, "Error: Missing argument (-%c)\n", optopt);
    else
        optind = 1;

    exitMsg(-1, &usage, "Error: No valid arguments provided\n");
}


void exitMsg(int status, void (*fnEnd)(), char* pFmt, ...)
{
    // print error message
    va_list vaArg;
    va_start(vaArg, pFmt);

    vfprintf(stderr, pFmt, vaArg);
    fflush(stderr);

    va_end(vaArg);
    
    // run end routine
    if( fnEnd )
        fnEnd();

    exit(status);
}


void optAppend()
{
    printf("outAppend(): %s\n", optarg);
}


void optRead()
{
    printf("outRead(): %s\n", optarg);
}


void optHelp()
{
    printf("outHelp()\n");
}

void optWrite()
{
    printf("outWrite(): %s\n", optarg);
}


void usage()
{
    fprintf(stderr, "This is the usage() function\n");
}
