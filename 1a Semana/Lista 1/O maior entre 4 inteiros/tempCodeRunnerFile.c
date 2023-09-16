#include<stdio.h>

int main(){
    int a,b,c,d,x;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>=b && a>=c && a>=d){
        x = a;
    }
    if(b>=a && b>=c && b>=d){
        x = b;
    }
    if(c>=a && c>=b && c>=d){
        x = c;
    }
    if(d>=a && d>=b && d>=c){
        x = d;
    }
    }
    printf("Maior: %d",x);

    return 0;
}