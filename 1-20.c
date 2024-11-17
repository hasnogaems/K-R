#include <stdio.h>
#define tab 8
void getlinee(char line[]);
int main(){
    char line[1000];
    int i=0;
    
        getlinee(line);
    
}
void getlinee(char line[]){
    int c;
    int i=0;
    for(i=0;(c=getchar())!=EOF&&c!='\n'; i++){
        if(c!='\t')line[i]=c;
        else{
           
            
            while(((i)%tab)>0){
            line[i]='x';
            i++;}
            
            i--;
        }
        
    }
    line[i]='\0';
    printf("%s\n", line);

}
