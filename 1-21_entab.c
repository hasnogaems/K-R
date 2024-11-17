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
    int kk=0;
    int k=0;
    int tabcount=0;
    char buffer[10];
    int skip=0; //модификатор счета позиции курсора в зависимости от количества вставленных tab
    for(i=0;(c=getchar())!=EOF&&c!='\n'; i++){
       // if(c==' '&&skip>0){skip--;i--;continue;}
        if(c!=' '&&skip==0){line[i]=c;}
        else{
        
         {if(line[i-1]=='\t')kk=0;
        else{kk=((i+tabcount)%tab);}
        k=kk;
        int skipfirst=1;
        for(int f=0;k<tab;k++){
            if(skipfirst==0)c=getchar();
            skipfirst=0;
            if(c=='\n'){break;}
            
            buffer[f]=c;
            f++;
            skip=f;
             
            if(c!=' '){
                k=f;
                f=0;
                
                while(k>0){
                
            line[i]=buffer[f];
            i++;
            f++;
            k--;}
            i--;
            
            break;
            }
        }
        if(c=='\n'){i++;break;}
        if(k==tab) {//we reached tab with spaces
       // skip=k-kk;
      // i++;
       line[i]='\t';
       tabcount=tabcount+(skip-1);skip=0;
       //i--;
       }}
        }
        }
        
    
    line[i]='\0';
    printf("%s\n", line);

}
