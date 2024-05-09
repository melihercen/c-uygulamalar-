#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MY_LENGTH 15

char *generatePassword(int length)
{
    //bellekte gerekilen alan acılır
    char *password = (char *)malloc((length + 1) * sizeof(char));
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;:,.<>?";
    srand(time(NULL));

    if (password)
    {
        for (int i = 0; i < length; i++)
        {
            //rastgele karakter seçilir ve uzunluğa gore ayarlanır
            int index = rand() % (sizeof(charset) - 1);
            //seçilen her karakter sırasıyla passwordun içine yazılır
            password[i] = charset[index];
        }
        password[length] = '\0';
    }
    return password;
}

int main()
{
    int choice;
    int length;
    char my_list[15];

    printf("1-Choose your characters\n2-Random\n3-Exit\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter password Length: ");
        scanf("%d", &length);
        if (length > MY_LENGTH)
        {
            printf("Error: Password length cannot exceed %d characters.\n", MY_LENGTH);
            return 1;
        }
        printf("Enter your character list: ");
        scanf("%s", my_list);

        srand(time(NULL));
        printf("Generated password: ");
        for (int i = 0; i < length; i++)
        {
            //my list içineki karakterler alınır ve uzunluğa göre rastgele sıralanır
            printf("%c", my_list[rand() % strlen(my_list)]);
        }
        break;
    case 2:
        printf("Enter password length: ");
        scanf("%d", &length);

        if (length > MY_LENGTH)
        {
            printf("Error: Password length cannot exceed %d characters.\n", MY_LENGTH);
            return 1;
        }

        char *password = generatePassword(length);
        if (password)
        {
            printf("Generated password: %s\n", password);
            free(password);
        }
        else
        {
            printf("Error: Failed to generate password.\n");
        }
        break;
    case 3:
        break;
    default:
     printf("Invalid choice.\n");
        break;
    }

    return 0;
}
