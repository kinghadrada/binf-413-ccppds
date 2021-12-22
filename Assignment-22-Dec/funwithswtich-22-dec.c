//
//Course: C, CPP and DS (BINF-413) 
//Taught By:A Murali
//Code By:Satyakam
//Last Compiled:23-Dec-21
//Description:testing variants of simple switch with three cases


#include <stdio.h>
    int main() {
        int num = 8;
        switch (num) {
            case 7:
                printf("Value is 7\n");
                //break;
            case 8:
                printf("Value is 8\n");
                //break;
            case 9:
                printf("Value is 9\n");
                //break;
            default:
                printf("Out of range\n");
                break;
        }
        return 0;
}
