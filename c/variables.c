#include <stdio.h>
int main()
{

char CharacterName[] = "Tom";
int characterAge = 67;
    printf("There once was a man named %s\n", CharacterName);
    printf("He was %d years old.\n", characterAge);
    characterAge = 30;
    printf("He really liked the name %s.\n", CharacterName);
    printf("But did not like being %d. \n ", characterAge);

    return 0;
}
