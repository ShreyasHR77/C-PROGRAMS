#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    if(!isalpha(ch))
    {
        printf("The Entered character %c is not an Alphabet\n",ch);
    }
    else if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("The Entered character %c is a Vowel\n",ch);
    }
    else
    {
        printf("The Entered character %c is a Consonant\n",ch);
    }
    return 0;
    
}