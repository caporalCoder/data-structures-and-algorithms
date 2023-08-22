#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

bool is_leap_year(int year) {
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int days_in_month(int month, int year) {
    switch(month) {
        case 4: case 6: case 9: case 11: return 30;
        case 2: return is_leap_year(year) ? 29 : 28;
        default: return 31;
    }
}

int sundays_on_first(int start_day, int start_month, int start_year, int end_day, int end_month, int end_year) {
    // Setting up the initial day of the week, 1 Jan 1900 was a Monday
    int day_of_week = 1;  // 0 is Sunday, 1 is Monday, and so on.
    
    // Count days till the starting date to adjust day_of_week
    for(int y = 1900; y < start_year; y++) {
        for(int m = 1; m <= 12; m++) {
            day_of_week = (day_of_week + days_in_month(m, y)) % 7;
        }
    }
    for(int m = 1; m < start_month; m++) {
        day_of_week = (day_of_week + days_in_month(m, start_year)) % 7;
    }
    day_of_week = (day_of_week + start_day - 1) % 7;  // -1 to adjust for the 1-based day
    
    int sundays_count = 0;
    
    while (start_year < end_year || (start_year == end_year && start_month <= end_month)) {
        if (day_of_week == 0 && start_day == 1) {
            sundays_count++;
        }

        // Proceed to next month
        day_of_week = (day_of_week + days_in_month(start_month, start_year)) % 7;
        start_month++;
        if (start_month > 12) {
            start_month = 1;
            start_year++;
        }
    }

    return sundays_count;
}

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        string start, end;
        cin >> start >> end;

        int start_day, start_month, start_year;
        int end_day, end_month, end_year;

        std::cin >> start_year  >> start_month >> start_day;
        std::cin >> end_year >> end_month >> end_day;

        cout << sundays_on_first(start_day, start_month, start_year, end_day, end_month, end_year) << endl;
    }

    return 0;
}
