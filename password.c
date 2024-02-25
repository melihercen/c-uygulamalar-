#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//karakterlerin rastgele seçildiği fonksiyon
//Function where we choose random characters
void password(int password_length){
char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/";
srand(time(NULL));
for(int i=0;i<password_length;i++)
{
    printf("%c",list[rand()%(sizeof(list)-1)]);

}
printf("\n");
}
//Karakterleri kendimizin seçtiği fonksiyon
//Function where we choose our own characters
void mypassword(int password_length)
{
    char my_list[100];
    printf("Enter yoou characters:");
    scanf("%s",&my_list);
    srand(time(NULL));
    for(int i=0;i<password_length;i++)
    {
    printf("%c",my_list[rand()%strlen(my_list)]);
    }
    printf("\n");   
}

int main()
{
     int choice,password_length;
    printf("1-I chooice my random characters\n2-Random\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter password length:");
        scanf("%d",&password_length);
        mypassword(password_length);
        
    }
    else if(choice==2)
    {
        printf("Enter password length:");
        scanf("%d",&password_length);
        password(password_length);
    }
    else
    {
        printf("Wrong input!");

    }
    return 0;
}