#include <stdio.h>
int main()
{
    float num1,num2,num3,num4;
    float operation_num;
    float result;
    char operation_type;
    printf("How many numbers do you want to operation: ");
    scanf("%f",&operation_num);
    
    //Kaç sayılı bir işlem yapılcağı öğrenilir
    //How many numbered operations will be carried out
    if (operation_num>=2 || operation_num==4)
    {
        printf("Input your operation numbers: ");
        if (operation_num==2)
        {
            scanf("%f %f",&num1,&num2);
        }
        else if(operation_num==3)
        {
            scanf("%f %f %f",&num1,&num2,&num3);
        }
        else if(operation_num==4)
        {
            scanf("%f %f %f %f",&num1,&num2,&num3,&num4);
        }
        else
        {
            printf("Wrong input");
        }
    //Hangi tip bir işlem yapılcağı öğrenilir
    //Learned which type operation will made
        printf("Which type operation (+,-,*,/): ");
        scanf(" %c",&operation_type);
    //Switch ile işlemler oluşturulur
    //With switch make the operation
        switch (operation_type)
        {
            case '+':
                if(operation_num==2)
                {
                result=num1+num2;
                printf("Operation result: %f\n",result);
                }
                else if(operation_num==3)
                {
                result=num1+num2+num3;
                printf("Operation result: %f\n",result);
                }
                else if(operation_num==4)
                {
                result=num1+num2+num3+num4;
                printf("Operation result: %f\n",result);
                }
                break;
            case '-':
                if(operation_num==2)
                {
                result=num1-num2;
                printf("Operation result: %f\n",result);
                }
                else if(operation_num==3)
                {               
                result=num1-num2-num3;
                printf("Operation result: %f\n",result);
                }
                else if(operation_num==4){
                result=num1-num2-num3-num4;
                printf("Operation result: %f\n",result);
                }
                    break;
            case '*':
                if(operation_num==2)
                {
                result=num1*num2;
                printf("Operation result: %f\n",result);
                }
                else if(operation_num==3)
                {
                result=num1*num2*num3;
                printf("Operation result: %f\n",result);
                }
                else if(operation_num==4)
                {
                result=num1*num2*num3*num4;
                printf("Operation result: %f\n",result);
                }
                    break;
            case '/':
                if(operation_num==2)
                {
                result=(float)num1/num2;
                printf("Operation result: %.2f\n",result);
                }
                    break;
        
            default:
                printf("Wrong input\n");
                break;
            }
    }
    else
    {
        printf("Wrong input");
    }
    return 0;
}