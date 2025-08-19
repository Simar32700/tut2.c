#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);
    return 0;
}

// ---------------------------------------------------------------
// reverse of the string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    char temp;

    printf("Enter a string: ");
    gets(str);

    // find length
    int len = strlen(str);

    // reverse the string in place
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
// -------------------------------------------------------------------------------------------
// to remove the vowels
#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    gets(str);

    // Loop through each character
    for (i = 0; str[i] != '\0'; i++) {
        // If current char is a vowel (both upper and lower case)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {

            // Shift all characters to the left by 1
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            i--; // step back to check the new character at same position
        }
    }

    printf("String without vowels: %s\n", str);

    return 0;
}
// --------------------------------------------------------------------------------------------
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character in uppercase: ");
    scanf("%c", &ch);

    if (isupper(ch))
        ch = tolower(ch);

    printf("Lowercase character: %c\n", ch);
    return 0;
}