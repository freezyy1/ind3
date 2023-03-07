//
//  eq2.h
//  university_projects
//
//  Created by Dmitrij on 07.03.2023.
//

#ifndef eq2_h
#define eq2_h


class eq2 {
private:
    double a, b, c, D;
public:
    eq2(double a1, double b1, double c1);
    void set(double a1, double b1, double c1);
    double find_X();
    double find_Y(double x1);
    eq2 operator+(const eq2& other) const;
};

#endif /* eq2_h */
