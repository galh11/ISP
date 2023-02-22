#include <assert.h>

int safe_get(struct array arr, int i) {
    assert(arr.a != NULL);
    assert(i >= 0 && i < arr.n);
    return arr.a[i];
}