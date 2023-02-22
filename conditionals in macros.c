#define LOW 1
#define MEDIUM 2
#define HIGH 3

#define LOGGING_LEVEL HIGH

#if LOGGING_LEVEL >= MEDIUM
#define LOG_MEDIUM(message) printf(message)
#else
#define LOG_MEDIUM(message) ((void)0)
#endif

defined(identifier) // checks whether a macro has been defined

#ifdef MACRO === #if defined(MACRO)
#ifndef MACRO === #if !defined(MACRO)

// convention to prevent from making the same declaration appear more than once:
#ifndef TESTING_H
#define TESTING_H

//contents of testing.h
...
#endif