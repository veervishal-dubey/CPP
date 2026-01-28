class Time {
    int hours, minutes, seconds;

public:
    Time(int totalseconds) {
        hours = totalseconds / 3600;
        totalseconds %= 3600;
        minutes = totalseconds / 60;
        seconds = totalseconds % 60;
    }

    operator int() {
        return hours * 3600 + minutes * 60 + seconds;
    }
};
