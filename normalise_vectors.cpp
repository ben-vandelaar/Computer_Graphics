template<typename T>

class Vec3
{
    public:
        // 3 most basic ways of initializing a vector from
        Vec3() : x(T(0), y(T(0)), z(T())) {}
        Vec3(const T &xx) : x(xx), y(xx), z(xx) {}
        Vec3(T xx, T yy, T zz) : x(xx), y(yy), z(zz) {}
        T x, y, z;
};

typedef Vec3<float> Vec3f;

Vec3<float> a;
Vec3f b;