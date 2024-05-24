#pragma once
unsigned int Nod(unsigned int a, unsigned int b) {
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;
    if (a > b)
        return Nod(a % b, b);
    return Nod(a, b % a);
}

//if (two.zn == false && one.zn == false) {
//    tmp.a = one.a * two.b + one.b * two.a;
//    tmp.zn = false;
//}
//else {
//    if (one.zn == true && two.zn == false) {
//        int tmp1 = (int)(one.b * two.a - one.a * two.b);
//        if (tmp1 < 0)
//        {
//            tmp.a = (one.a * two.b - one.b * two.a);
//            tmp.zn = true;
//        }
//        else {
//            tmp.zn = false;
//            tmp.a = (one.b * two.a - one.a * two.b);
//        }
//        //tmp.a = (one.b * two.a - one.a * two.b );
//    }
//    else {
//        if (one.zn == false && two.zn == true) {
//            int tmp1 = (int)(one.a * two.b - one.b * two.a);
//            if (tmp1 < 0)
//            {
//                tmp.a = (one.b * two.a - one.a * two.b);
//                tmp.zn = true;
//            }
//            else {
//                tmp.a = (one.a * two.b - one.b * two.a);
//                tmp.zn = false;
//            }
//        }
//        else {
//            tmp.a = (one.a * two.b + one.b * two.a);
//            tmp.zn = true;
//        }
//    }
//}
////tmp.a = (one.a * two.b + one.b * two.a);
//tmp.b = (one.b * two.b);
//unsigned int y = Nod(tmp.a, tmp.b);
//if (y != 1) {
//    tmp.a = tmp.a / y;
//    tmp.b = tmp.b / y;
//}


//if (two.zn == false && one.zn == false) {
//    int tmp1 = (int)(one.a * two.b - one.b * two.a);
//    if (tmp1 < 0)
//    {
//        tmp.a = (one.b * two.a - one.a * two.b);
//        tmp.zn = true;
//    }
//    else {
//        tmp.a = (one.a * two.b - one.b * two.a);
//        tmp.zn = false;
//    }
//}
//else {
//    if (one.zn == true && two.zn == false) {
//        tmp.a = (one.b * two.a + one.a * two.b);
//        tmp.zn = true;
//        //tmp.a = (one.b * two.a - one.a * two.b );
//    }
//    else {
//        if (one.zn == false && two.zn == true) {
//            tmp.a = (one.a * two.b + one.b * two.a);
//            tmp.zn = false;
//        }
//        else {
//            tmp.a = (one.a * two.b + one.b * two.a);
//            tmp.zn = true;
//        }
//    }
//}
//tmp.b = (one.b * two.b);


//tmp.a = (one.a * two.a);
//tmp.b = (one.b * two.b);
//if (one.zn == true && two.zn == true) tmp.zn = false;
//else tmp.zn = one.zn + two.zn;

//tmp.a = (one.a * two.b);
//tmp.b = (one.b * two.a);
//if (one.zn == true && two.zn == true) tmp.zn = false;
//else tmp.zn = one.zn + two.zn;