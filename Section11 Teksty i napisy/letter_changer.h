#ifndef UNTITLED_LETTER_CHANGER_H
#define UNTITLED_LETTER_CHANGER_H
enum letter_changer_t{
    TO_LOWER=0,
    TO_UPPER=1
};
char* change_letter_size(char *txt, enum letter_changer_t c);
char to_lower(char x);
char to_upper(char x);
#endif
