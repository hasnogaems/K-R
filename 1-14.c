#include <stdio.h>
int main(){
int array[200]={0};
int chars[200]={0};
int count=0;

int c;
int k=1;
    while((c=getchar())!=EOF){
        
            array[c]++;
            if(count<array[c])count=array[c];
        }
        while(count>0){
        for(int i=199;i>0;i--){
            if(array[i]>0){
                
            if(array[i]==count){
                if(chars[i]==0){chars[i]=k;k++;}
printf("o ");if(count>1)array[i]--;
            }
            
        
        
        
        
        }
        }
        printf("\n");
        count--;
    }
    int kk=1;
    while(kk<k){
    for(int h=0;h<199;h++){
if(chars[h]>0&&chars[h]==kk){
    if(h==10)
    printf("\b\\n ");
    else
    printf("%c ", h);
}
    }
    kk++;
    }
}