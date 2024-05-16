#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exponentiate(int,int);
int permutation(int PermNum);

int main()
{
    float num1,num2,num3,num4;
    float operation_num;
    float result;
    char operation_type;
    int operation;
    int choice;
    int base,upper;
    int squareroot;
    float sqrtresult;
    int permNum;
    printf("1-Basic processing(+,-,/,*)\n2-Exponentiate /Extraction /Permutation \n");
    scanf("%d",&operation);
    if(operation==2)
    {
        
        printf("1-Exponentiate \n2-Extraction\n3-Permutation\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter base force: \n");
            scanf("%d",&base);
            printf("Enter the upper force:\n");
            scanf("%d",&upper);
            
            exponentiate(base,upper);
            break;
        case 2:
            printf("Enter the number to be square-rooted:  ");
            scanf("%d",&squareroot);
            sqrtresult=sqrt(squareroot);
            printf("square root of %d = %f",squareroot,sqrtresult);
            break; 
        case 3:
            printf("Enter the number to be permuted: ");
            scanf("%d",&permNum);
            int result=permutation(permNum);
            printf("%d!= %d",permNum,result); 
            break;
        default:
            break;
        }
    }

    else if(operation==1)
    {
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
    }
    else
        {
            printf("Wrong input");
        }

    return 0;
}
void exponentiate(int base,int upper)
{
    if(upper==0)
    {
        printf("%d to the power of %d = 1",base,upper);
    }
    else if(upper<0)
    {
        float result=1;
        for(int i=0;i<-y;i++)
            {
                result/=-base;
            }
        printf("%d to the power of %d = %f",base,upper,result);
        
    }
    else{
    int result=base;
    //taban belirtilen us ifadesi kadar dongude carpma
    //multiply in the loop until the base specified exponent expression
    for(int i=1;i<upper;i++)
    {
        
        result*=base;
        
    }
    printf("%d to the power of %d =",base,upper);
    printf("%d",result);
    }
}

int permutation(int PermNum)
{
    if(PermNum>1)
    {
        return PermNum*permutation(PermNum-1);
    }
}
