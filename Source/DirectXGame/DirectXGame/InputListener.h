#pragma once
#include "Point.h"


class InputListener
{

public:
    InputListener()
    {

    }
    ~InputListener()
    {

    }

    //pure virtual callback function

    virtual void onKeyDown(int key) = 0;
    virtual void onKeyUp(int key) = 0;
    
    //MOUSE pure virtual callback function
    virtual void onMouseMove(const Point& delta_mouse_pos) = 0;
    
    virtual void onLeftMouseButtonDown(const Point& delta_mouse_pos) = 0;
    virtual void onLeftMouseButtonUp(const Point& delta_mouse_pos) = 0;

    virtual void onRightMouseButtonDown(const Point& delta_mouse_pos) = 0;
    virtual void onRightMouseButtonUp(const Point& delta_mouse_pos) = 0;


    

};