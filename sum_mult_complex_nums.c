typedef struct Complex{
    double real;
    double imagine;
}complex;

complex addComp(complex num1, complex num2){
    complex sum={.real=num1.real+num2.real , .imagine=num1.imagine+num2.imagine};
    return sum;
}


complex multiplyComp(complex num1,complex num2){
    complex mult={.real=(num1.real*num2.real)-(num1.imagine*num2.imagine), .imagine=(num1.real*num2.imagine)+(num1.imagine*num2.real)};
    return mult;
}

int main(){
    
    complex sum,mult,num1,num2;
    
    printf("Enter real and imaginiary parts of the 1st number\n");
    scanf("%lf %lf",&num1.real, &num1.imagine);
    printf("Enter real and imaginiary parts of the 2nd number\n");
    scanf("%lf %lf",&num2.real, &num2.imagine);
    
    sum=addComp(num1, num2);
    printf("Sum:%lf+ %lfi \n",sum.real,sum.imagine);
    
    mult=multiplyComp(num1,num2);
    printf("Multiplication: %.2lf + %.2lfi\n",mult.real,mult.imagine);
    
    return 0;
}