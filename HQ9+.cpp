#include <stdio.h>
#include <string.h>
void a99beer(){
    for(int i = 99; i >= 0; i--){
        if (i==1){
            printf("1 bottle of beer on the wall, 1 bottle of beer.\nTake one down and pass it around, no more bottles of beer on the wall.\n");
        }
        else if(i==0){
            printf("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n");
        }
        else if(i==2){
            printf("2 bottles of beer on the wall, 2 bottles of beer.\nTake one down and pass it around, 1 bottle of beer on the wall.\n");
        }
        else{
            printf("%d bottles of beer on the wall, %d bottles of beer.\nTake one down and pass it around, %d bottles of beer on the wall.\n", i, i, i-1);
        }
    }
}

int main(){
    int x=0;
    char command[1000];
    printf("The HQ9+ interpreter v1.0.0\n");
    for(;;){
        printf(">>> ");
        scanf("%s", command);
        for(int i = 0; i < strlen(command); i++){
            if(command[i]=='H') printf("Hello, World!\n");
            else if(command[i]=='Q') printf("%s\n",command);
            else if(command[i]=='9') a99beer();
            else if(command[i]=='+') x++;
            else{
                printf("Error: Unknown command\n");
                break;
            }
        }
    }
    return 0;
}
