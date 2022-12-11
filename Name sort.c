#include <stdio.h>
#include <string.h>

int compare(const void *a, const void *b) {
    const char *aa = *(const char **)a;
    const char *bb = *(const char **)b;
    return strcmp(aa, bb);
}

int main(int argc, char **argv) {
    // An array of strings to sort
    char *names[] = {
        "John",
        "Jane",
        "Bob",
        "Alice",
    };

    // Sort the array of names using qsort
    qsort(names, sizeof(names) / sizeof(char *), sizeof(char *), compare);

    // Print the sorted names
    for (int i = 0; i < sizeof(names) / sizeof(char *); i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
