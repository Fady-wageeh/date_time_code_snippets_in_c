# Time function in C language

it captures the time using the time(&t) and saves it in the variable t
then it prints the current time using ctime(&t),
then it copies the current time to a string buffer, 
then it uses the string buffer to get its content to be copied in a set of strings in a struct where these strings represents the  
    day_of_week[4];
    month[4];
    day_number[3];
    hours[3];
    minutes[3];
    seconds[3];
    year[5];
