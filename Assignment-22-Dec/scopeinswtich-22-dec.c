//
//Course: C, CPP and DS (BINF-413) 
//Taught By:A Murali
//Code By:Satyakam
//Last Compiled:23-Dec-21
//Description: Checking whether scoping cases will break the switch or not
//Conclusion: The code works as intended even with some case statements being in a different scope


#include <stdio.h>
    int main() {
        int num = 15;
        switch (num) {
            case 7:
                {printf("Value is 7");  //here there are braces
                break;}
            case 8:
                {printf("Value is 8"); //here too
                break;}
            case 9:
                printf("Value is 9"); //not here
                break;
            default:
                printf("Out of range");
                break;
        }
        return 0;
}


