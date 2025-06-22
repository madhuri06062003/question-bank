#include <stdio.h>

// User-defined function to check if two strings are equal
int areStringsEqual(char str1[], char str2[]) {
    int i = 0;

    // Compare each character
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // Strings are not equal
        }
        i++;
    }

    // If both strings end at the same time, they are equal
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char str[10],str1[10];
    printf("Enter str :");
    scanf("%s",str);
    printf("Enter str1 :\n");
    scanf("%s",str1);

    if (areStringsEqual(str, str1)) {
        printf("Two strings are equal\n");
    } else {
        printf("Two strings are not equal\n");
    }
    return 0;
}
