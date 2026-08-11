#include <stdlib.h>
#include <string.h>
char* intToRoman(int num) {
    int nums[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    char *roman[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12,j=0;
    char*c = malloc(16 * sizeof(char));
    int size=0;
        while( i >= 0)
        {
            while( num - nums[i] >= 0)
            {
                j=0;
                while ( roman[i][j] != '\0')
                {
                c[size] = roman[i][j];
                size++;  
                j++;
                }
                num -= nums[i];       
                if ( num == 0)
                {
                    c[size] = '\0';
                    return c;
                }          
            }
            i--;
        }
    return c;
}