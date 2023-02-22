#define identifier token-sequence
// ^ just like we already used define in c

#define identifier(parameters) token-sequence
// if using parameters, spaces are not allowed between the identifier and the parentheses

#define SQR(x) x*x
#define MAX(a,b) a > b ? a : b

// WATCH-OUT!
// usage:
double res1 = SQR(5+3);
// preprocessing:
double res1 = 5+3*5+3;

// safe solution, always using parentheses:
#define SQR(x) ((x) * (x))

// even now we'll have several problems i.e.:
sqr(++i) will increment twice

//these problems don't have a solution outside of being cautious and simplistic using macros

