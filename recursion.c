#include <stdio.h>

void countdown(int n){

    if(n<0){
        return;
    }

    printf("%d\n",n);
    return countdown(n-1);




}



int main(){
    countdown(10);







}