int main(void)

{
    
int num1,num2, res;


printf("This program computes moduli.\n Enter an integer to serve as the second operand: \n");
scanf("%d",&num2);
printf("Now enter the first operand: ");
scanf("%d",&num1);

    while (num1 > 0){
        res= num1%num2;
        printf("%d moduli  %d is %d\n",num1, num2, res);
        printf("Enter next number for first operand (<= 0 to quit): \n");
        scanf("%d", &num1);
    }
    
printf("Done\n");  

}
