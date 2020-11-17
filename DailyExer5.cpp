// DailyExer5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int var1;
    char fmt[] = "%d";
    char a1 = 'a';
    short a2 = 15;


    __asm {
        lea eax, [var1]
        push eax
        lea eax, [fmt]
        push eax
        call scanf_s
        add esp, 8

        lea esi, var1
        mov eax, [esi]
        push eax
        lea esi, [fmt]
        mov eax, esi
        push eax
        call printf
        add esp, 8

       // mov ax, a2
       // movzx eax, byte ptr[ax]
       // push eax
       // lea eax, fmt
       // push eax
       // call printf
        //add esp, 8





    }
    return 0;
}

