#include <stdio.h>
#include <stdlib.h>

int get_first_WeekDay(int year) {
    int d;
    
    d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;

    return d;
}

int main(int argc, char *argv[])
{
    int year,month,day,daysInMonth,weekDay=0,startingDay,monthNum,m,a=0;
    char *months[]={"-January-","February-","--March--","--April--","---May---","--June---","--July---","-August--","September","-Octuber-","November-","December-"};
    int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(argc>3){
        printf("\033[0;97mUsage:\033[0m \033[1;91m<year> <month>\033[0m \033[0;97mor only\033[0m \033[1;91m<year>\033[0m");
        exit(1);
    }

    if(argc<3) {

        year = atoi(argv[1]);

        if(year<1){
            printf("\n\033[1;91m <Give a numerical value> \033[0m\n\n");
            exit(1);
        }
        printf("\n\n\n\033[0;34m************** Welcome to \033[0m\033[1;92m%d\033[0m\033[0;34m **************\033[0m\n", year);
        if((year%4==0 && year%100!=0) || year%400==0)
        monthDay[1] = 29;
    
    startingDay = get_first_WeekDay(year);
    for(month=0;month<12;month++) {
        daysInMonth= monthDay[month];
        printf("\n\n\033[0;33m------------\033[0m\033[1;94m%s\033[0m\033[0;33m----------------\033[0m",months[month]);
        printf("\n  \033[1;92mSun  Mon  Tue  Wed  Thu  Fri  Sat\033[0m\n");

        for(weekDay=0; startingDay>weekDay; weekDay++) 
        printf("     ");

        for(day=1;day<=daysInMonth;day++) {
            printf("%5d",day);

        if(++weekDay>6){
            printf("\n");
            weekDay=0;
        }
        startingDay = weekDay;
        }
    }
    printf("\n\n");
    exit(1);
    
    }

    if(argc<4) {
        year = atoi(argv[1]);
        if((year%4==0 && year%100!=0) || year%400==0)
        monthDay[1] = 29;

        if(year<1){
            printf("\n\033[1;91m <Give a numerical value> \033[0m\n\n");
            exit(1);
        }

    
    monthNum = atoi(argv[2]) - 1;

    if(monthNum>11 || monthNum<0) {
        printf("\n\n");
    printf("      \033[1;97m*\033[0m         \033[0;31m*\033[0m       \033[1;91m*\033[0m     \033[0;94m*\033[0m \n");
    printf("    \033[0;31m*\033[0m      \033[1;94m*\033[0m      \033[1;92m*\033[0m    \033[1;97m*\033[0m   \033[1;93m*\033[0m     \033[0;92m*\033[0m \n");
    printf("      \033[1;92m*\033[0m       \033[1;91m*\033[0m      \033[1;93m*\033[0m       \033[1;94m*\033[0m  \n");
    printf("  \033[0;94m*\033[0m \033[1;96mAre\033[0m \033[1;96mYou\033[0m \033[1;96mCame\033[0m \033[1;96mFrom\033[0m \033[1;96mOuterspace\033[0m \033[1;96m?\033[0m  \033[0;93m*\033[0m \n");
    printf("          \033[0;33m*\033[0m     \033[1;91m*\033[0m         \033[0;31m*\033[0m         \n");
    printf("     \033[1;91m*\033[0m            \033[0;37m*\033[0m         \033[1;94m*\033[0m    \033[1;92m*\033[0m  \n");
    printf("  \033[1;94m*\033[0m    \033[0;37m*\033[0m       \033[0;92m*\033[0m    \033[1;91m*\033[0m     \033[1;97m*\033[0m        \033[0;94m*\033[0m  \n\n");
    printf("\n\n\033[1;91m <You cannot use negative number, 0, letters or any kind of symbols> \033[0m\n\n");

    exit(1);

    }

    for(m=0;m<monthNum;m++) {
        a = monthDay[m] + a;
    }

    startingDay = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1+a) % 7 ;

    
        daysInMonth= monthDay[monthNum];
        printf("\n\n\033[0;33m------------\033[0m\033[1;94m%s\033[0m\033[0;33m----------------\033[0m",months[monthNum]);
        printf("\n  \033[1;92mSun  Mon  Tue  Wed  Thu  Fri  Sat\033[0m\n");

        for(weekDay=0; startingDay>weekDay; weekDay++) 
        printf("     ");

        for(day=1;day<=daysInMonth;day++) {
            printf("%5d",day);

        if(++weekDay>6){
            printf("\n");
            weekDay=0;
        }
        
        }

        printf("\n\n\n");

        exit(1);
        
    }


}
