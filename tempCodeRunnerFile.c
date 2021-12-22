#include <stdio.h>
int main()  
{  
    char ch,vowel,conso;  
    
    printf("Input any alphabet : ");  
    scanf("%c", &ch);
	vowel = ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' 

|| ch=='U'; 
    conso = (ch>='a' && ch<='z') || (ch>='A' && ch<='Z');
  
    if(vowel)  
    {  
        printf("The alphabet is a vowel.\n");  
    }  
    else if(conso)  
    {  
        printf("The alphabet is a consonant.\n");  
    }  
    else  
    {  
        printf("The character is not an alphabet.\n");  
    }
    return 0;
}
