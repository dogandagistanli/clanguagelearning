#include <stdio.h>
int square(int arg); // mainin altına yazarsak warning verir üstüne böyle yapabiliriz
int main(){

int result = square(6);
printf("Result is: %d ",result);


return 0;





}
int square(int arg){
    return arg*arg;

}