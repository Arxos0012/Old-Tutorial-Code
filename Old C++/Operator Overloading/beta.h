#ifndef BETA_H
#define BETA_H


class beta
{
    public:
        int num;
        beta();
        beta(int);
        beta operator+(beta);
        /*operator+ tells the computer that when you
        add class objects of the same type to call this
        function*/
};

#endif // BETA_H
