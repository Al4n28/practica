#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int multiplyTen(int n)
{
    int sum=0;
    // Running a loop and add n with itself 10 times
    for(int i=0;i<10;i++)
    {
        sum=sum+n;
    }
    return sum;
}

int convertToInt(char a[1000]){
    int i = 0;
    int num = 0;
    for (int j=0; j< strlen(a);j++)
    {
        printf("a= %c i= %i n= %d num=%i \n",a[i],i,a[i] - '0',num);
        if (a[i] == '0'){
            printf("noooooooo");
            num = multiplyTen(num);
            printf("%i",num);
            }
        else{
            num =  (a[i] - '0')  + (num * 10);
        }
        
        i++;
    }
    return num;
    }


int main(){
    
    char num[1000] ="";
    
    for(int i=1;i<16; i++){
        char str[10];
        sprintf(str, "%d", i);
        strcat(num, str);
        
    }
    int sol;
    printf("a= %s",num);
    sscanf(num, "%d", &sol);
    /*char myarray[5] = {'-', '1', '2', '3', '\0'};
    int i;
    sscanf(myarray, "%d", &i);*/
    printf("a= %d",convertToInt(num));

 
}


