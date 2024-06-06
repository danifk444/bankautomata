#ifndef COMMONSTRUCTS_H
#define COMMONSTRUCTS_H

int main_exit;

struct date
{
    int month, day, year;
};

struct account
{
    char name[60];
    int acc_no, age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;
    char status;
};

struct account *accounts;
int num_accounts = 0;

float interest(float t, float amount, int rate)
{
    float SI;
    SI = (rate * t * amount) / 100.0;
    return (SI);
}

#endif
