void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list num;
    va_start(num, n);
    for (int i = 0; i < n; i++)
        printf("%d\n", va_arg(num, int));
    va_end(num);
}
