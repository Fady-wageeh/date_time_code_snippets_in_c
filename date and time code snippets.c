
/*

code snippet that returns the current date time and shows the current values of the following list of data separtely and saves these pieces of data in an instance
"current_date_and_time" from the struct prototype "date_and_time":


///////////////// note that this you need to include the library " time.h  " to run this code on a PC


     day_of_week
     month
     day_number
     hours
     minutes
     seconds
     year


*/







time_t t;
time(&t);

printf("\nthe current time is:%s\n",ctime(&t));

struct date_and_time{

    char day_of_week[4];
    char month[4];
    char day_number[3];
    char hours[3];
    char minutes[3];
    char seconds[3];
    char year[5];
}current_date_and_time;


char str_buff[25];
strcpy(str_buff,ctime(&t));

current_date_and_time.day_of_week[0] = str_buff[0];
current_date_and_time.day_of_week[1] = str_buff[1];
current_date_and_time.day_of_week[2] = str_buff[2];
current_date_and_time.day_of_week[3] = '\0';

//str_buff[3] is space

current_date_and_time.month[0] = str_buff[4];
current_date_and_time.month[1] = str_buff[5];
current_date_and_time.month[2] = str_buff[6];
current_date_and_time.month[3] = '\0';

//str_buff[7] is space

current_date_and_time.day_number[0] = str_buff[8];
current_date_and_time.day_number[1] = str_buff[9];
current_date_and_time.day_number[2] = '\0';

//str_buff[10] is space

current_date_and_time.hours[0] = str_buff[11];
current_date_and_time.hours[1] = str_buff[12];
current_date_and_time.hours[2] ='\0';

//str_buff[13] is space
current_date_and_time.minutes[0] = str_buff[14];
current_date_and_time.minutes[1] = str_buff[15];
current_date_and_time.minutes[2] = '\0';

//str_buff[16] is space
current_date_and_time.seconds[0] = str_buff[17];
current_date_and_time.seconds[1] = str_buff[18];
current_date_and_time.seconds[2] = '\0';


//str_buff[19] is space

current_date_and_time.year[0] = str_buff[20];
current_date_and_time.year[1] = str_buff[21];
current_date_and_time.year[2] = str_buff[22];
current_date_and_time.year[3] = str_buff[23];
current_date_and_time.year[4] = '\0';



printf("\n\nday of week: %s\n",current_date_and_time.day_of_week);
printf("\n\nmonth: %s\n",current_date_and_time.month);
printf("\n\nday number: %s\n",current_date_and_time.day_number);
printf("\n\nhours: %s\n",current_date_and_time.hours);
printf("\n\nminutes: %s\n",current_date_and_time.minutes);
printf("\n\nseconds: %s\n",current_date_and_time.seconds);
printf("\n\nyear: %s\n",current_date_and_time.year);

















