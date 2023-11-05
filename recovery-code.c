#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void function to create recovery code
//l=length
//lc=length Characters
//ri=random index
//lcode=length Code
//rc=recovery code
void generateRecoveryCode(char code[], int l){
     const char characters[]="abcdefghiklmnopqrstuvwxyzABCDEFGHIKLMNOPQRSTUVXYZ0123456789";
     const int lc=sizeof(characters)-1;
     for(int i=0;i<l;i++){
          int ri=rand()%lc;
          code[i]=characters[ri];
     }
     code[l]='\0';
}

int main(){
     srand(time(NULL));
     int lcode=6;
     char rc[lcode+1];
     generateRecoveryCode(rc,lcode);
     printf("Recovery Code: %s\n", rc);

     return 0;
}