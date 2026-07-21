#include<stdio.h>
void br(){
    printf("Brazil,Russia");
}
void ic(){
    printf("India,China\n");
}
int main(){
    br();
    printf(",");
    ic();
    ic();
    br();
    return 0;
}