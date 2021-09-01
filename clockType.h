class clockType {
    int hr;
    int min;
    int sec;
public:
    void setTime(int, int, int);
    void getTime(int&, int&, int&) const;
    void printTime() const;
    int incrementSeconds();
    int incrementMinutes();
    int incrementHours();
    bool equalTime(const clockType&) const;
};
