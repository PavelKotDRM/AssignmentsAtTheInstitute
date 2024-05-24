#pragma once
struct Drob
{
	unsigned int a;
	unsigned int b;
	bool zn;
	Drob() {
		this->a = 0;
		this->b = 0;
		this->zn = false;
	}
	Drob(unsigned int _a, unsigned int _b, bool _zn) {
		this->a = _a;
		this->b = _b;
		this->zn = _zn;
	}
	Drob(const Drob& other) {
		this->a = other.a;
		this->b = other.b;
		this->zn = other.zn;
	}


	Drob operator + (const Drob& other) {
        Drob tmp;
        if (other.zn == false && this->zn == false) {
            tmp.a = this->a * other.b + this->b * other.a;
            tmp.zn = false;
        }
        else {
            if (this->zn == true && other.zn == false) {
                int tmp1 = (int)(this->b * other.a - this->a * other.b);
                if (tmp1 < 0)
                {
                    tmp.a = (this->a * other.b - this->b * other.a);
                    tmp.zn = true;
                }
                else {
                    tmp.zn = false;
                    tmp.a = (this->b * other.a - this->a * other.b);
                }
                //tmp.a = (this->b * other.a - this->a * other.b );
            }
            else {
                if (this->zn == false && other.zn == true) {
                    int tmp1 = (int)(this->a * other.b - this->b * other.a);
                    if (tmp1 < 0)
                    {
                        tmp.a = (this->b * other.a - this->a * other.b);
                        tmp.zn = true;
                    }
                    else {
                        tmp.a = (this->a * other.b - this->b * other.a);
                        tmp.zn = false;
                    }
                }
                else {
                    tmp.a = (this->a * other.b + this->b * other.a);
                    tmp.zn = true;
                }
            }
        }
        //tmp.a = (this->a * other.b + this->b * other.a);
        tmp.b = (this->b * other.b);
        return tmp;
	}
	Drob operator - (const Drob& other) {
        Drob tmp;
        if (other.zn == false && this->zn == false) {
            int tmp1 = (int)(this->a * other.b - this->b * other.a);
            if (tmp1 < 0)
            {
                tmp.a = (this->b * other.a - this->a * other.b);
                tmp.zn = true;
            }
            else {
                tmp.a = (this->a * other.b - this->b * other.a);
                tmp.zn = false;
            }
        }
        else {
            if (this->zn == true && other.zn == false) {
                tmp.a = (this->b * other.a + this->a * other.b);
                tmp.zn = true;
                //tmp.a = (this->b * other.a - this->a * other.b );
            }
            else {
                if (this->zn == false && other.zn == true) {
                    tmp.a = (this->a * other.b + this->b * other.a);
                    tmp.zn = false;
                }
                else {
                    tmp.a = (this->a * other.b + this->b * other.a);
                    tmp.zn = true;
                }
            }
        }
        tmp.b = (this->b * other.b);
        return tmp;
	}
	Drob operator * (const Drob& other) {
        Drob tmp;
        tmp.a = (this->a * other.a);
        tmp.b = (this->b * other.b);
        if (this->zn == true && other.zn == true) tmp.zn = false;
        else tmp.zn = this->zn + other.zn;
        return tmp;
	}
	Drob operator / (const Drob& other) {
        Drob tmp;
        tmp.a = (this->a * other.b);
        tmp.b = (this->b * other.a);
        if (this->zn == true && other.zn == true) tmp.zn = false;
        else tmp.zn = this->zn + other.zn;
        return tmp;
	}
    Drob& operator = (const Drob& other) {
        this->a = other.a;
        this->b = other.b;
        this->zn = other.zn;
        return *this;
    }
};