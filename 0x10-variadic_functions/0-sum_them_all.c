#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
    int sm = 0;
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; i++)
    {
        if (n == 0)
            return 0;
        sm += va_arg(args, int);
    }
    va_end(args);
    return sm;
}
