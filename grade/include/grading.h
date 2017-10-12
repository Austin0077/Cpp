#ifndef GRADING_H
#define GRADING_H


class grading
{
    public:
        char getgrade(float);
        void display();
        grading();
        virtual ~grading();

    protected:

    private:
        float mark;
        char grade;
};

#endif // GRADING_H
