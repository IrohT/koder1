#include <stdio.h>

char fordito(char betu){
    if(betu-0 +5 >= 122){
        return 'z' - betu + 101;
    }
    betu += 5;
    return betu;
}

int main(){
    FILE* kod = fopen("kodolt.txt", "w");
    char szoveg[100];
    char ujszoveg[100];
    scanf(" %s ", &szoveg);
    for (int i = 0;szoveg[i]; ++i) {
        ujszoveg[i] = fordito(szoveg[i]);
    }
    fprintf(kod, "%s", ujszoveg);
    fclose(kod);

    return 0;

}
