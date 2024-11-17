#include <stdio.h>
int main(){
    int c;
    int previous=0;
    while((c=getchar())!=EOF){
        if(c!=' '){
        previous=0;
        putchar(c);}
        else if(previous==0){  
            previous=1;  
        printf("\n");}
    }
}