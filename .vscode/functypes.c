/* 
error codes
1 : Insufficient Funds
2 : Cash Not Available  
*/
#include<stdio.h>
int bal=10000;
int cash=1000000;
int withdraw(int amount);
void deposit(int amount);
void showerror(int code);
void showbalance();

int withdraw(int amount){
    if(cash<amount){
        showerror(2);
    }
    if(amount<bal){
        printf("Please collect your cash");
        bal=bal-amount;
        cash=cash-amount;
        return 0;
    }
    else{
        showerror(1);
    }
    return 0;
}


void deposit(int amount){
    if(cash>(1000000-amount){
        showerror(3);
    }
    else{
        bal=bal+amount;
    }
}

void showbalance(){
    printf("The Balance in account is %d",bal);
}



int main(){
int op,amt;
printf("Select Operation");
printf("\n1. Withdraw Cash");
printf("\n2. Deposit");
printf("\n3. Show Balance");
scanf("%d",&op);
switch(op){
    case 1:
        printf("enter the amount");
        scanf("%d",&amt);
        withdraw(amt);
        break;
    case 2:
        printf("enter the amount");
        scanf("%d",&amt);
        deposit(amt);
        break;
    case 3:
        showbalance();
        break;
    default:
        printf("Invalid Operations");

}
return 0;
}

void showerror(int code){
 switch(code){
     case 1:
        printf("Insufficent Balance");
    case 2:
        printf("Cash not Available");
    case 3:
        printf("Cashbox is full cannot deposit");
    
 }
}