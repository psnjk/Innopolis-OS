#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
 
 int main(){
     for(int i = 0; i < 3; i++){
         fork();
     }
     sleep(5);
     return 0;
 }