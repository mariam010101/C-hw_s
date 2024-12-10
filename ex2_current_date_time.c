//EX2 Write a C program that:– Retrieves the current date and time.– Displays the date in the format: YYYY-MM-DD.– Displays the time in the format: HH:MM:SS.



#include <stdio.h>
#include <time.h> 

int main() {
    // Get the current time
    time_t now = time(NULL); // Get the current time in secondstime_t: A data type used to store time values (number of seconds since January 1, 1970, also known as the Unix epoch).
    if (now == -1) {
        printf("Error: Could not get the current time.\n");
        return 1; // Exit if there is an error
    }
    
    // Convert the time to a readable format (local time)
    struct tm *local = localtime(&now); // Convert to local time
    //struct tm: A structure provided by <time.h> that holds human-readable time information (e.g., year, month, day, hour, minute, second).
    if (local == NULL) {
        printf("Error: Could not convert to local time.\n");
        return 1; // Exit if there is an error
    }
    
    // Print the current date in YYYY-MM-DD format
    printf("Date: %d-%02d-%02d\n", 
           local->tm_year + 1900, // Year (add 1900 to get the full year)Adding 1900 converts it to the actual year.
           local->tm_mon + 1,    // Month (add 1 because months are 0-based),Adding 1 converts it to a 1-based month (1 = January, 12 = December).

           local->tm_mday);      // Day of the month
    
    // Print the current time in HH:MM:SS format
    printf("Time: %02d:%02d:%02d\n", 
           local->tm_hour,  // Hour
           local->tm_min,   // Minute
           local->tm_sec);  // Second

    return 0; // End the program
}