#include <stdio.h>
int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
    char arr[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int arr_index;
    for (int i=a; i<=b; i++) {
        arr_index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", arr[arr_index]);
    }
    return 0;
}
