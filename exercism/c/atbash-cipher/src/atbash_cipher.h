#ifndef ATBASH_CIPHER_H
#define ATBASH_CIPHER_H

extern const int code[26];

char *atbash_encode(char *input);

char *atbash_decode(char *input);

char *encode(char *input, int encode);

#endif
