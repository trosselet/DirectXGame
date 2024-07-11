#pragma once

class Vector3D
{
public:
    Vector3D(): m_x(0), m_y(0), m_z(0)
    {

    };
    
    Vector3D(float x, float y, float z): m_x(x), m_y(y), m_z(z)
    {

    };

    Vector3D(const Vector3D &vector): m_x(vector.m_x), m_y(vector.m_y), m_z(vector.m_z)
    {

    };

    static Vector3D lerp(const Vector3D& start, const Vector3D& end, float deltaValue)
    {
        Vector3D v;
        v.m_x = start.m_x * (1.0f - deltaValue) + end.m_x * (deltaValue);
        v.m_y = start.m_y * (1.0f - deltaValue) + end.m_y * (deltaValue);
        v.m_z = start.m_z * (1.0f - deltaValue) + end.m_z * (deltaValue);
        return v;
    };

    ~Vector3D()
    {
    };

public:
    float m_x, m_y, m_z;
};