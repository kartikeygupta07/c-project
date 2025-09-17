#include<stdio.h>
#include<conio.h>
int main(){
    int bd , bm , by , cd , cm , cy , dd , mm , yy , total_days;
    printf("Enter the born date :");
    scanf("%d" , &bd);
    printf("Enter the born month :");
    scanf("%d" , &bm);
    printf("Enter the born year :");
    scanf("%d" , &by);
    printf("Enter the current date :");
    scanf("%d" , &cd);
    printf("Enter the current month :");
    scanf("%d" , &cm);
    printf("Enter the curent year :");
    scanf("%d" , &cy);

    if(cd > bd && cm > bm){
        dd = cd - bd ;
        mm = cm - bm ; 
        yy = cy - by ;
        printf("%d %d %d" , dd ,mm ,yy);
    }
    else if (cd > bd && cm < bm ){
        dd = cd - bd; 
        cm = cm + 12 ; 
        yy = cy - by - 1; 
        mm = cm - bm ;
        
        printf("Days : %d \n  Months : %d\n Years : %d" , dd ,mm ,yy);
    }
    else if (cd < bd && cm > bm ){
        if (cm == 1 || cm ==3 || cm ==5 || cm ==7 ||cm ==8 || cm ==10 ||cm ==12){
            cd = cd + 31 ;
        }
        else if(cm ==4 || cm ==6 || cm ==9 ||cm ==11 ){
            cd = cd + 30 ;
        }
        dd = cd - bd ;
        mm = cm - bm ; 
        yy = cy - by ;
        printf("Days : %d \nMonths : %d \nYears : %d \n" , dd ,mm ,yy);
    }
    else if (cd < bd && cm < bm){
        if (cm == 1 || cm ==3 || cm ==5 || cm ==7 ||cm ==8 || cm ==10 ||cm ==12){
            cd = cd + 31 ;
        }
        else if(cm == 2 || cm ==4 || cm ==6 || cm ==9 ||cm ==11 ){
            cd = cd + 30 ;
        }
        dd = cd - bd ;
        cm = cm + 12 ;
        yy = cy - by - 1; 
        mm = cm - bm ;
        printf("Days : %d \nMonths : %d \nYears : %d \n" , dd ,mm ,yy);
    }
    if (mm == 1 || mm ==3 || mm ==5 || mm ==7 ||mm ==8 || mm ==10 ||mm ==12){
        mm = mm * 31 ; 
    }
    else if(mm ==4 || mm ==6 || mm ==9 ||mm ==11 ){
        mm = mm * 30 ;
    }
    else {
        mm = mm * 28 ;
    }
    total_days = yy * 365 + mm + dd;
    printf("Total age in days: %d", total_days);
    return 0 ; 
}