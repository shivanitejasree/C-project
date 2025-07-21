#include <stdio.h>

void palindrome(){
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) {
        printf("%d is a Palindrome.\n", original);
    } else {
        printf("%d is NOT a Palindrome.\n", original);
    }

    //return 0;
}

