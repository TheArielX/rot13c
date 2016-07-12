#include <stdio.h>
#include <stdlib.h>

int ASCII (char x, int y, int z){
     if(x=='a'){
        z=97+13;
        printf("%c", z);
    }
    else if(x=='b'){
        z=98+13;
        printf("%c", z);
    }
    else if(x=='c'){
        z=99+13;
        printf("%c", z);
    }
    else if(x=='d'){
        z=100+13;
        printf("%c", z);
    }
    else if(x=='e'){
        z=101+13;
        printf("%c", z);
    }
    else if(x=='f'){
        z=102+13;
        printf("%c", z);
    }
    else if(x=='g'){
        z=103+13;
        printf("%c", z);
    }
    else if(x=='h'){
        z=104+13;
        printf("%c", z);
    }
    else if(x=='i'){
        z=105+13;
        printf("%c", z);
    }
    else if(x=='j'){
        z=106+13;
        printf("%c", z);
    }
    else if(x=='k'){
        z=107+13;
        printf("%c", z);
    }
    else if(x=='l'){
        z=108+13;
        printf("%c", z);
    }
    else if(x=='m'){
        z=109+13;
        printf("%c", z);
    }
    //los demas caracteres
    if(x=='n'){
        z=110-13;
        printf("%c", z);
    }
    else if(x=='o'){
        z=111-13;
        printf("%c", z);
    }
    else if(x=='p'){
        z=112-13;
        printf("%c", z);
    }
    else if(x=='q'){
        z=113-13;
        printf("%c", z);
    }
    else if(x=='r'){
        z=114-13;
        printf("%c", z);
    }
    else if(x=='s'){
        z=115-13;
        printf("%c", z);
    }
    else if(x=='t'){
        z=116-13;
        printf("%c", z);
    }
    else if(x=='u'){
        z=117-13;
        printf("%c", z);
    }
    else if(x=='v'){
        z=118-13;
        printf("%c", z);
    }
    else if(x=='w'){
        z=119-13;
        printf("%c", z);
    }
    else if(x=='x'){
        z=120-13;
        printf("%c", z);
    }
    else if(x=='y'){
        z=121-13;
        printf("%c", z);
    }
    else if(x=='z'){
        z=122-13;
        printf("%c", z);
    }
    else if(x==' '){
        printf("espacio");
    }
}

int main()
{
char x;
int y, z,i=0;
    while (i=!0){
    scanf("\n%c", &x);
    ASCII(x,y,z);
    }
}

