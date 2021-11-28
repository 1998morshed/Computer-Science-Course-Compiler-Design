#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char s[20],c;
    int block=0,i=0, test=6;

    while(test--)
    {
        printf("\n Enter a string: ");
        gets(s);
        while(s[i]!='\0')
        {
            switch(block)
            {
            case 0:
                c=s[i++];
                if(c=='a')
                    block=1;
                else if(c=='b')
                    block=2;
                else
                    block=6;
                break;
            case 1:
                c=s[i++];
                if(c=='a')
                    block=3;
                else if(c=='b')
                    block=4;
                else
                    block=6;
                break;
            case 2:
                c=s[i++];
                if(c=='a')
                    block=6;
                else if(c=='b')
                    block=2;
                else
                    block=6;
                break;
            case 3:
                c=s[i++];
                if(c=='a')
                    block=3;
                else if(c=='b')
                    block=2;
                else
                    block=6;
                break;
            case 4:
                c=s[i++];
                if(c=='a')
                    block=6;
                else if(c=='b')
                    block=5;
                else
                    block=6;
                break;
            case 5:
                c=s[i++];
                if(c=='a')
                    block=6;
                else if(c=='b')
                    block=2;
                else
                    block=6;
                break;
            case 6:
                printf("\n %s is not recognised. \n",s);
                exit(0);
            }
        }
        if(block==1)
            printf("\n %s is accepted under rule 'a'\n",s);
        else if((block==2)||(block==4))
            printf("\n %s is accepted under rule 'a*b+'\n",s);
        else if(block==5)
            printf("\n %s is accepted under rule 'abb'\n",s);
        else
            printf("\n %s is not recognize\n",s);


        block=0,i=0;


    }

    getch();
}
