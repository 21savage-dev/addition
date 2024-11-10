#include <stdio.h>

int main() {

    int son;
    int xona = 0;


    printf("sonni kiriting:");
    scanf("%d",&son);

    if(son > 0) {
        xona = 0;
    } else if(son < 0) {
        son = -son;
    }
    while(son > 0) {
        xona++;
        son = son / 10;

    }
    char symbol[xona];


    printf("kiritilgan son %d xonali\n",xona);
    return 0;
}