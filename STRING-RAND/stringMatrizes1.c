#include <stdio.h>
#define MAXTAM 50
int main(){
char frase[MAXTAM];
printf("digite a frase-> ");
gets(frase);
int primeira = 1;
for(int i = 0; frase[i] != '\0'; i++){
    if (primeira ==1){
       frase[i] = toupper(frase[i]);
       primeira = 0;
    }
    else if(frase[i] == ' '){
        primeira = 1;
    }
}
printf(frase);

return 0;

}
