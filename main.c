 #include <stdio.h>

int main()
{
int i,j;
int x[5] = {2,10,15,17,21};


char name[] = "SYMBIOSIS";
printf("Value stored in the string (character array): %s \n\n", name);

printf("String characters at even indexes:\n");

for(j=0; j< sizeof(name); j++)
{
if(j % 2 ==0)
{
printf("%c", name[j]);

}
else
{
printf("\n");
}
}


return 0;
}
