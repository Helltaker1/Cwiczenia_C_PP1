#include <stdio.h>

int main() {
    char text1[1001];
    char m = 'a';
    int number_of_letters_of_the_alphabet[26] = {0};
    printf("Podaj tekst:\n");
    scanf("%1000[^\n]", text1);
    for (int i=0; i < 1000; i++) {
        if (text1[i] == '\0') {
            break;
        }
        if (!(text1[i] >= 'A' && text1[i] <= 'Z' || text1[i] >= 'a' && text1[i] <= 'z' || text1[i] == ' ')) {
            printf("Incorrect input");
            return 1;
        }
        if (text1[i] == 'a' || text1[i] == 'A') {
            number_of_letters_of_the_alphabet[0] += 1;
        }
        if (text1[i] == 'b' || text1[i] == 'B') {
            number_of_letters_of_the_alphabet[1] += 1;
        }
        if (text1[i] == 'c' || text1[i] == 'C') {
            number_of_letters_of_the_alphabet[2] += 1;
        }
        if (text1[i] == 'd' || text1[i] == 'D') {
            number_of_letters_of_the_alphabet[3] += 1;
        }
        if (text1[i] == 'e' || text1[i] == 'E') {
            number_of_letters_of_the_alphabet[4] += 1;
        }
        if (text1[i] == 'f' || text1[i] == 'F') {
            number_of_letters_of_the_alphabet[5] += 1;
        }
        if (text1[i] == 'g' || text1[i] == 'G') {
            number_of_letters_of_the_alphabet[6] += 1;
        }
        if (text1[i] == 'h' || text1[i] == 'H') {
            number_of_letters_of_the_alphabet[7] += 1;
        }
        if (text1[i] == 'i' || text1[i] == 'I') {
            number_of_letters_of_the_alphabet[8] += 1;
        }
        if (text1[i] == 'j' || text1[i] == 'J') {
            number_of_letters_of_the_alphabet[9] += 1;
        }
        if (text1[i] == 'k' || text1[i] == 'K') {
            number_of_letters_of_the_alphabet[10] += 1;
        }
        if (text1[i] == 'l' || text1[i] == 'L') {
            number_of_letters_of_the_alphabet[11] += 1;
        }
        if (text1[i] == 'm' || text1[i] == 'M') {
            number_of_letters_of_the_alphabet[12] += 1;
        }
        if (text1[i] == 'n' || text1[i] == 'N') {
            number_of_letters_of_the_alphabet[13] += 1;
        }
        if (text1[i] == 'o' || text1[i] == 'O') {
            number_of_letters_of_the_alphabet[14] += 1;
        }
        if (text1[i] == 'p' || text1[i] == 'P') {
            number_of_letters_of_the_alphabet[15] += 1;
        }
        if (text1[i] == 'q' || text1[i] == 'Q') {
            number_of_letters_of_the_alphabet[16] += 1;
        }
        if (text1[i] == 'r' || text1[i] == 'R') {
            number_of_letters_of_the_alphabet[17] += 1;
        }
        if (text1[i] == 's' || text1[i] == 'S') {
            number_of_letters_of_the_alphabet[18] += 1;
        }
        if (text1[i] == 't' || text1[i] == 'T') {
            number_of_letters_of_the_alphabet[19] += 1;
        }
        if (text1[i] == 'u' || text1[i] == 'U') {
            number_of_letters_of_the_alphabet[20] += 1;
        }
        if (text1[i] == 'v' || text1[i] == 'V') {
            number_of_letters_of_the_alphabet[21] += 1;
        }
        if (text1[i] == 'w' || text1[i] == 'W') {
            number_of_letters_of_the_alphabet[22] += 1;
        }
        if (text1[i] == 'x' || text1[i] == 'X') {
            number_of_letters_of_the_alphabet[23] += 1;
        }
        if (text1[i] == 'y' || text1[i] == 'Y') {
            number_of_letters_of_the_alphabet[24] += 1;
        }
        if (text1[i] == 'z' || text1[i] == 'Z') {
            number_of_letters_of_the_alphabet[25] += 1;
        }

    }
    for (int n = 0; n < 26; n++) {
        printf("%c - %d\n", m + n, number_of_letters_of_the_alphabet[n]);
    }
    return 0;
}