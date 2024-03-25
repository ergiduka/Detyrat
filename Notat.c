#include <stdio.h>


 int main(){

     int nota;
     printf("Vendosni piket e marra ne provim : ");
     scanf("%d",&nota);
     int piket;
     if (nota>=0 && nota<=100){
            switch(nota/10){
        case 10 :
        case 9 :
            printf("Nota juaj eshte : A");
            break;
        case 8 :
            printf("Nota juaj eshte : B");
            break;
        case 7 :
            printf("Nota juaj eshte : C");
            break;
        case 6 :
            printf("Nota juaj eshte : D");
            break;
        default :
            printf("Nota juaj eshte : F");

                   }
     }

                   else{
                    printf("Piket sjan te sakta");
                   }






  return 0;
 }

