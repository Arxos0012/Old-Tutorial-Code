#ifndef MOTHER_H
#define MOTHER_H


class Mother
{
    public:
        int pubV;   //other class can access this int
    protected:
        int proV;
        /*only this class, friends, and derived classes
        can access is int*/
    private:
        int priV;   //other class can't access this int
};

#endif // MOTHER_H
