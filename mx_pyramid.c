#include <unistd.h>
void mx_printchar(char c);

void mx_print_first_row(int n) {
    for (int i = 0; i < n; i++) {
        mx_printchar(' ');
    }
    mx_printchar('/');
    mx_printchar('\\');
    mx_printchar('\n');
}
void mx_print_middle_row(int n, int i, int a, int b) {
    for (int j = 0; j < n - i; j++) {
        mx_printchar(' ');
    }
    mx_printchar('/');
    for (int j = 0; j < a; j++) {
        mx_printchar(' ');
    }
    mx_printchar('\\');
    for (int j = 0; j < b; j++) {
        mx_printchar(' ');
    }
    if (i < n / 2) {
        mx_printchar(' ');
        mx_printchar('\\');
    } else {
        mx_printchar('|');
    }
    mx_printchar('\n');
}
void mx_print_last_row(int n) {
    mx_printchar(' ');
    mx_printchar('/');
    for (int i = 0; i < 2 * n - 3; i++) {
        mx_printchar('_');
    }
    mx_printchar('\\');
    mx_printchar('|');
    mx_printchar('\n');
}
void mx_pyramid(int n) {
    if (n % 2 == 0 && n > 1) {
        int a = 1;
        int b = 0;
        mx_print_first_row(n);
        for (int i = 1; i < n - 1; i++) {
            mx_print_middle_row(n, i, a, b);
            a += 2;
            if (i < n / 2) {
                b++;
            } else {
                b--;
            }
        }
        mx_print_last_row(n);
    }
}

